#ifndef SET_ASSOCIATIVE_H
#define SET_ASSOCIATIVE_H

#include "main_memory.h"
#include "cache_stats.h"

#define SET_ASSOCIATIVE_NUM_SETS 8
#define SET_ASSOCIATIVE_NUM_SETS_LN 3
#define SET_ASSOCIATIVE_NUM_WAYS 2
#define SET_ASSOCIATIVE_NUM_WAYS_LN 1

typedef struct way
{
    memory_block *mem;
    unsigned int valid;
    unsigned int dirty;
    unsigned int LRU_index;
} way;

typedef struct SAC_set
{
    way way[SET_ASSOCIATIVE_NUM_WAYS];
} SAC_set;

typedef struct set_associative_cache
{
    main_memory* mm;
    cache_stats cs;
    SAC_set *set;
    unsigned int LRU_count;

    // TODO: add anything you need
} set_associative_cache;

// Do not edit below this line

set_associative_cache* sac_init(main_memory* mm);

void sac_store_word(set_associative_cache* sac, void* addr, unsigned int val);

unsigned int sac_load_word(set_associative_cache* sac, void* addr);

void sac_free(set_associative_cache* sac);

#endif
