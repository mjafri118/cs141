#include <stdint.h>

#include "memory_block.h"
#include "set_associative.h"

set_associative_cache* sac_init(main_memory* mm)
{
    set_associative_cache* result = malloc(sizeof(set_associative_cache));

    result -> mm = mm;
    result -> cs = cs_init();

    // Create ways


    // Create sets
    result -> set = calloc(SET_ASSOCIATIVE_NUM_SETS, sizeof(SAC_set));
    SAC_set *set = result->set;
    for(int i=0; i < SET_ASSOCIATIVE_NUM_SETS; i++){
        // set[i] = calloc(SET_ASSOCIATIVE_NUM_WAYS, sizeof(way));
        for(int j=0; j < SET_ASSOCIATIVE_NUM_WAYS; j++){
            set[i].way[j].valid = 0;
            set[i].way[j].dirty = 0;
            set[i].way[j].LRU_index = 0; // we will increment LRU_index for newest used.
        }
    }

    result -> LRU_count = 0;
    return result;
}

// Optional
//
static int addr_to_set(void* addr)
{
    int offset = ((long) addr/MAIN_MEMORY_BLOCK_SIZE) % SET_ASSOCIATIVE_NUM_SETS;
    // printf("Index: %d\n", offset);
    return offset;
}
//
static void mark_as_used(set_associative_cache* sac, int index, int way)
{
    SAC_set* set = sac->set;

    //If LRU is maxed out
    // if(sac -> LRU_count == 4294967295){
    //     for(int i=0; i < SET_ASSOCIATIVE_NUM_SETS; i++){
    //         for(int j=0; j < SET_ASSOCIATIVE_NUM_WAYS; j++){
    //             //change index of every way
    //             set[i].way[j].LRU_index -= 4294967278;
    //         }
    //     }
    //     sac -> LRU_count -= 4294967278;
    // }
    set[index].way[way].LRU_index = sac -> LRU_count;
}

static int lru(set_associative_cache* sac, int index)
{
    SAC_set *set = sac->set;
    unsigned int lru = 4294967295; // any arbitrarily large number
    unsigned int lru_target = SET_ASSOCIATIVE_NUM_WAYS -1;

    // Iterate over every way/set to find least LRU number.
    for(int i = 0; i < SET_ASSOCIATIVE_NUM_WAYS; i++) {

        // update LRU for the lowest LRU_index number.
        // Index with lowest LRU is flushed

        // Iterates only over valid sets as well
        if ((set[index].way[i].LRU_index < lru)){//&& (set[i].mem != 0) && (set[i].valid == 1)){
            lru_target = i;
            lru = set[index].way[i].LRU_index;
        }
    }

    return lru_target;
}

void sac_store_word(set_associative_cache* sac, void* addr, unsigned int val)
{
    // TODO
    sac -> LRU_count += 1;
    ++sac->cs.w_queries;

    unsigned int * temp;

    // Precompute start address of memory block IN BYTES (size_t in bytes)
    size_t addr_offt = (size_t) (addr - MAIN_MEMORY_START_ADDR) % MAIN_MEMORY_BLOCK_SIZE;
    void* mb_start_addr = addr - addr_offt;
    int index = addr_to_set(mb_start_addr); // which cache line/set

    SAC_set *set = sac -> set;

    // Iterate over every way in the specific index to check if we have the memory there.
    for(int i =0; i < SET_ASSOCIATIVE_NUM_WAYS; i++){
        // check if there is data in the way
        if((set[index].way[i].mem !=0) && (set[index].way[i].valid == 1)){
            // if there is data check to see if it is data that we want
            if((long) set[index].way[i].mem -> start_addr == (long) mb_start_addr){

                temp = set[index].way[i].mem -> data + addr_offt;
                *temp = val;
                set[index].way[i].dirty = 1;
                mark_as_used(sac,index,i); //*********
                return;

            }
        }

        // check if the cache is empty (miss)
        else{
            ++sac->cs.w_misses;
            // Load memory block from main memory
            memory_block* mb = mm_read(sac->mm, mb_start_addr);

            // Update relevant word in memory block
            unsigned int* mb_addr = mb->data + addr_offt;

            // Update
            *mb_addr = val;
            set[index].way[i].valid = 1;
            set[index].way[i].dirty = 1;
            mark_as_used(sac, index, i); //*********
            // set[i].LRU_index = 1;
            set[index].way[i].mem = mb;
            return;

        }

    }
    // if we're here, the memory isn't in the set at all. miss.
    ++sac->cs.w_misses;
    // find next available way and put memory in there, marking as dirty.
    unsigned int lru_target = lru(sac, index); //*******

    // check if lru target is dirty
    if (set[index].way[lru_target].dirty == 1){
        mm_write(sac->mm, set[index].way[lru_target].mem->start_addr, set[index].way[lru_target].mem);
        mb_free(set[index].way[lru_target].mem);
    }

    memory_block* mb = mm_read(sac->mm, mb_start_addr);
    // Update relevant word in memory block
    unsigned int* mb_addr = mb-> data + addr_offt;

    // Update values
    *mb_addr = val;
    set[index].way[lru_target].valid = 1;
    set[index].way[lru_target].dirty = 1;
    set[index].way[lru_target].mem = mb;
    mark_as_used(sac, index, lru_target); //**********

}


unsigned int sac_load_word(set_associative_cache* sac, void* addr)
{
    // TODO

    sac -> LRU_count += 1;
    // Precompute start address of memory block IN BYTES (size_t in bytes)
    size_t addr_offt = (size_t) (addr - MAIN_MEMORY_START_ADDR) % MAIN_MEMORY_BLOCK_SIZE;
    void* mb_start_addr = addr - addr_offt;
    int index = addr_to_set(mb_start_addr); // which cache line/set
    ++sac->cs.r_queries;

    SAC_set *set = sac->set;

    // Iterate over every way (length is FULLY_ASSOCIATIVE_NUM_WAYS) looking for exact address
    for(int i = 0; i < SET_ASSOCIATIVE_NUM_WAYS; i++) {

        if ((set[index].way[i].mem != 0) && (set[index].way[i].valid == 1)){
            //  If it is there, just give the data in there back. Hit.
            if ((long) set[index].way[i].mem->start_addr == (long) mb_start_addr){
                memory_block* mb = set[index].way[i].mem;
                unsigned int* mb_addr = mb->data + addr_offt;
                unsigned int* out = mb_addr;
                mark_as_used(sac,index,i);
                return(*out);
            }
        }

    }
    // increment miss
    ++sac->cs.r_misses;
    // see if any set is empty
    for(int i = 0; i < SET_ASSOCIATIVE_NUM_WAYS; i++) {
        // if there is an unused way in cache
        if (set[index].way[i].valid == 0){
            //read from main memory and store in empty way.
            memory_block *mb = mm_read(sac->mm, mb_start_addr);
            unsigned int* out = mb->data + addr_offt;

            // update way
            set[index].way[i].mem = mb;
            set[index].way[i].valid = 1;
            set[index].way[i].dirty = 0;
            mark_as_used(sac,index,i);
            return(*out);
        }
    }

    //lru = find LRU by calling lru.
    unsigned int lru_target = lru(sac, index);

    // if lru memory is dirty
    if (set[index].way[lru_target].dirty == 1){

        // write what's currently in lru
        // to main memory to save changes from cache.
        mm_write(sac->mm, set[index].way[lru_target].mem->start_addr, set[index].way[lru_target].mem);
        mb_free(set[index].way[lru_target].mem);

    }
    // overwrite LRU data with a read from main memory
    memory_block* mb = mm_read(sac->mm, mb_start_addr);

    set[index].way[lru_target].mem = mb;
    set[index].way[lru_target].valid = 1;
    set[index].way[lru_target].dirty = 0;
    mark_as_used(sac,index,lru_target);

    unsigned int* mb_addr = mb->data + addr_offt;
    unsigned int* out = mb_addr;

    return(*out);
}

void sac_free(set_associative_cache* sac)
{
    SAC_set *SAC_set = sac->set;
    for (int j=0; j < SET_ASSOCIATIVE_NUM_SETS; j++){
        for(int i = 0; i < SET_ASSOCIATIVE_NUM_WAYS; i++) {
            if(SAC_set[j].way[i].mem != 0){
                mb_free(SAC_set[j].way[i].mem);
            }
        }
    }

    free(SAC_set);
    free(sac);
}
