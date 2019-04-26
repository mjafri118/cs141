#include "memory_block.h"
#include "fully_associative.h"
#include <stdio.h>

fully_associative_cache* fac_init(main_memory* mm)
{
    fully_associative_cache* result = malloc(sizeof(fully_associative_cache));
    result -> mm = mm;
    result -> cs = cs_init();

    // Create cache, FULLY_ASSOCIATIVE_NUM_WAYS cache_lines.
    result -> set = calloc(FULLY_ASSOCIATIVE_NUM_WAYS, sizeof(set));

    set *set = result->set;

    // Iterate over every set, set to 0.
    for(int i = 0; i < FULLY_ASSOCIATIVE_NUM_WAYS; i++) {
        set[i].valid = 0; // valid will be used as our LRU
        set[i].dirty = 0;
        set[i].LRU_index = 0; // we will increment LRU_index for newest used.
    }

    result -> LRU_count = 0;
    return result;
}

// Optional

static void mark_as_used(fully_associative_cache* fac, int way)
{
    set* set = fac->set;

    // iterates through all the sets
        // find the greatest LRU_index, set that

    //If LRU is maxed out
    // if(fac -> LRU_count == 4294967295){
    //     for(int i=0; i < FULLY_ASSOCIATIVE_NUM_WAYS; i++){
    //         //change index of every set
    //     }
    //     fac -> LRU_count -= 4294967278;
    // }
    set[way].LRU_index = fac -> LRU_count;
}

// find the way where the LRU is. static -> unsigned
unsigned int lru(fully_associative_cache* fac)
{
    set *set = fac->set;
    unsigned int lru = 4294967295; // any arbitrarily large number
    unsigned int lru_target = FULLY_ASSOCIATIVE_NUM_WAYS -1;

    // Iterate over every way/set to find least LRU number.
    for(int i = 0; i < FULLY_ASSOCIATIVE_NUM_WAYS; i++) {

        // update LRU for the highest LRU_index number.
        // (LRU_index gets incremented for every use in
        // mark_as_used.)

        // Iterates only over valid sets as well
        if ((set[i].LRU_index < lru)){//&& (set[i].mem != 0) && (set[i].valid == 1)){
            lru_target = i;
            lru = set[i].LRU_index;
        }
    }

    return lru_target;

}

void fac_store_word(fully_associative_cache* fac, void* addr, unsigned int val)
{
    fac -> LRU_count += 1;
    ++fac->cs.w_queries;
    // deref to unsigned int pointer for changing the value, write to main mem
    unsigned int * temp;

    // Precompute start address of memory block IN BYTES (size_t in bytes)
    size_t addr_offt = (size_t) (addr - MAIN_MEMORY_START_ADDR) % MAIN_MEMORY_BLOCK_SIZE;
    void* mb_start_addr = addr - addr_offt;

    set *set = fac->set;
    // Iterate over every way/set to check if we have the memory there.
    for(int i = 0; i < FULLY_ASSOCIATIVE_NUM_WAYS; i++) {

        // check if the data is in the cache

        // ensure we are entering good memory
        if ((set[i].mem != 0) && (set[i].valid == 1)){
            // checks if the memory start address of the set corresponds
            // to the one in our address.
            if ((long) set[i].mem->start_addr == (long) mb_start_addr){


                // Check if the right block is in array: hit
                // if((long) set[i].mem->start_addr == (long) mb_start_addr){
                temp = set[i].mem -> data + addr_offt;
                *temp = val;
                set[i].dirty = 1;
                mark_as_used(fac,i);
                return;

            }
        }


        // check if the cache is empty (miss)
        else{

            // mb_free(memory_block *mb)

            ++fac->cs.w_misses;

            // Load memory block from main memory
            memory_block* mb = mm_read(fac->mm, mb_start_addr);

            // Update relevant word in memory block
            unsigned int* mb_addr = mb->data + addr_offt;

            // Update
            *mb_addr = val;
            set[i].valid = 1;
            set[i].dirty = 1;
            mark_as_used(fac, i);
            // set[i].LRU_index = 1;
            set[i].mem = mb;
            return;

        }

                // replacing what was in the filled cache with new value


    }

    // if we're here, the memory isn't in the set at all. miss.
    ++fac->cs.w_misses;


    // find next available way and put memory in there, marking as dirty.
    unsigned int lru_target = lru(fac);

    // check if lru target is dirty
    if (set[lru_target].dirty == 1){
        mm_write(fac->mm, set[lru_target].mem->start_addr, set[lru_target].mem);
        mb_free(set[lru_target].mem);
    }

    memory_block* mb = mm_read(fac->mm, mb_start_addr);

    // Update relevant word in memory block
    unsigned int* mb_addr = mb-> data + addr_offt;

    // Update values
    *mb_addr = val;
    set[lru_target].valid = 1;
    set[lru_target].dirty = 1;
    set[lru_target].mem = mb;
    mark_as_used(fac, lru_target);
    // set[lru_target].LRU_index = 1;
    // mark_as_used(fac,lru_target);
}


unsigned int fac_load_word(fully_associative_cache* fac, void* addr)
{
    fac -> LRU_count += 1;
    // Precompute start address of memory block IN BYTES (size_t in bytes)
    size_t addr_offt = (size_t) (addr - MAIN_MEMORY_START_ADDR) % MAIN_MEMORY_BLOCK_SIZE;
    void* mb_start_addr = addr - addr_offt;

    ++fac->cs.r_queries;

    set *set = fac->set;
    // Iterate over every way (length is FULLY_ASSOCIATIVE_NUM_WAYS) looking for exact address
    for(int i = 0; i < FULLY_ASSOCIATIVE_NUM_WAYS; i++) {

        if ((set[i].mem != 0) && (set[i].valid == 1)){
            //  If it is there, just give the data in there back. Hit.
            if ((long) set[i].mem->start_addr == (long) mb_start_addr){
                memory_block* mb = set[i].mem;
                unsigned int* mb_addr = mb->data + addr_offt;
                unsigned int* out = mb_addr;
                mark_as_used(fac,i);
                return(*out);
            }
        }

    }

    // It is not in cache, miss. We need to access memory.

    // increment miss
    ++fac->cs.r_misses;

    // see if any set is empty
    for(int i = 0; i < FULLY_ASSOCIATIVE_NUM_WAYS; i++) {
        // if there is an unused way in cache
        if (set[i].valid == 0){
            //read from main memory and store in empty way.
            memory_block *mb = mm_read(fac->mm, mb_start_addr);
            unsigned int* out = mb->data + addr_offt;

            // update way
            set[i].mem = mb;
            set[i].valid = 1;
            set[i].dirty = 0;
            mark_as_used(fac,i);
            return(*out);
        }
    }

    // if cache is full, eviction

    //lru = find LRU by calling lru.
    unsigned int lru_target = lru(fac);

    // if lru memory is dirty
    if (set[lru_target].dirty == 1){

        // write what's currently in lru
        // to main memory to save changes from cache.
        mm_write(fac->mm, set[lru_target].mem->start_addr, set[lru_target].mem);
        mb_free(set[lru_target].mem);

    }

    // overwrite LRU data with a read from main memory
    memory_block* mb = mm_read(fac->mm, mb_start_addr);

    set[lru_target].mem = mb;
    set[lru_target].valid = 1;
    set[lru_target].dirty = 0;
    mark_as_used(fac,lru_target);
    // mark as used? maybe.

    unsigned int* mb_addr = mb->data + addr_offt;
    unsigned int* out = mb_addr;
    return (*out);
}

void fac_free(fully_associative_cache* fac)
{
    set *set = fac->set;
    for(int i = 0; i < FULLY_ASSOCIATIVE_NUM_WAYS; i++) {
        if(set[i].mem != 0){
            mb_free(set[i].mem);
        }
    }

    free(set);
    free(fac);
}
