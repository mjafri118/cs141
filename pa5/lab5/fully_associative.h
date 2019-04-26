#ifndef FULLY_ASSOCIATIVE_H
#define FULLY_ASSOCIATIVE_H

#include "main_memory.h"
#include "cache_stats.h"

#define FULLY_ASSOCIATIVE_NUM_WAYS 16
#define FULLY_ASSOCIATIVE_NUM_WAYS_LN 4

typedef struct set
{
    memory_block *mem;
    unsigned int valid;
    unsigned int dirty;
    unsigned int LRU_index;
} set;

typedef struct fully_associative_cache
{
    main_memory* mm;
    cache_stats cs;
    set *set;

} fully_associative_cache;

// Do not edit below this line

fully_associative_cache* fac_init(main_memory* mm);

void fac_store_word(fully_associative_cache* fac, void* addr, unsigned int val);

unsigned int fac_load_word(fully_associative_cache* fac, void* addr);

void fac_free(fully_associative_cache* fac);

#endif
