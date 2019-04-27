#include <stdint.h>

#include "memory_block.h"
#include "set_associative.h"

set_associative_cache* sac_init(main_memory* mm)
{
    // TODO

    return 0;
}

// Optional
/*
static int addr_to_set(void* addr)
{
    int offset = ((long) addr/MAIN_MEMORY_BLOCK_SIZE) % DIRECT_MAPPED_NUM_SETS;
    // printf("Index: %d\n", offset);
    return offset;
}

static void mark_as_used(set_associative_cache* sac, int set, int way)
{
    set* set = fac->set;

    //If LRU is maxed out
    if(fac -> LRU_count == 4294967295){
        for(int i=0; i < FULLY_ASSOCIATIVE_NUM_WAYS; i++){
            //change index of every set
            set[i].LRU_index -= 4294967278;
        }
        fac -> LRU_count -= 4294967278;
    }
    set[way].LRU_index = fac -> LRU_count;
}

static int lru(set_associative_cache* sac, int set)
{
    set *set = fac->set;
    unsigned int lru = 4294967295; // any arbitrarily large number
    unsigned int lru_target = FULLY_ASSOCIATIVE_NUM_WAYS -1;

    // Iterate over every way/set to find least LRU number.
    for(int i = 0; i < FULLY_ASSOCIATIVE_NUM_WAYS; i++) {

        // update LRU for the lowest LRU_index number.
        // Index with lowest LRU is flushed

        // Iterates only over valid sets as well
        if ((set[i].LRU_index < lru)){//&& (set[i].mem != 0) && (set[i].valid == 1)){
            lru_target = i;
            lru = set[i].LRU_index;
        }
    }

    return lru_target;
}
*/

void sac_store_word(set_associative_cache* sac, void* addr, unsigned int val)
{
    // TODO
}


unsigned int sac_load_word(set_associative_cache* sac, void* addr)
{
    // TODO
    return 0;
}

void sac_free(set_associative_cache* sac)
{
    // TODO
}