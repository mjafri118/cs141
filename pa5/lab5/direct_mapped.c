#include <stdint.h>
#include <string.h>

#include "memory_block.h"
#include "direct_mapped.h"

direct_mapped_cache* dmc_init(main_memory* mm)
{
    // TODO

    direct_mapped_cache* result = malloc(sizeof(direct_mapped_cache));
    result -> mm = mm;
    result -> cs = cs_init();

    // result -> cache = malloc(sizeof(void *));

    // Instantiate cache lines
    // cache_line *temp = result -> cache;
    // for(int i = 0; i < DIRECT_MAPPED_NUM_SETS; i++) {
    //     *(temp + i) = malloc(sizeof(cache_line));
    //     *(temp + i) -> mem = malloc(sizeof(memory_block));
    // }

    return result;
}

// Optional

static int addr_to_set(void* addr)
{
    const int *address = &addr;
    int dress = *address;

    int offset = 0;
    offset = (int) (dress/4);
    offset = offset % 16;
    printf("%d\n", offset);

    return offset;
}


void dmc_store_word(direct_mapped_cache* dmc, void* addr, unsigned int val)
{
    // TODO
    int index = addr_to_set(addr);
    cache_line *arr = dmc -> cache;
    *(arr + index)
}

unsigned int dmc_load_word(direct_mapped_cache* dmc, void* addr)
{
    // TODO
    addr_to_set(addr);
    return 0;
}

void dmc_free(direct_mapped_cache* dmc)
{
    // TODO
}