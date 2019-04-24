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
    cache_line * set;
    set = calloc(DIRECT_MAPPED_NUM_SETS, sizeof(cache_line));

    // printf("%d", size);
    // memory_block * temp = mb_new(0, size, source);
    // for(int i = 0; i < DIRECT_MAPPED_NUM_SETS; i++) {
    //     set[i].mem = temp;
    //     set[i].valid = 0;
    //     set[i].dirty = 0;
    // }

    // set = new cache_line [DIRECT_MAPPED_NUM_SETS];
    // malloc(sizeof(cache_line) * DIRECT_MAPPED_NUM_SETS);

    result -> cache = set;

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
    // printf("%d\n", offset);

    return offset;
}


void dmc_store_word(direct_mapped_cache* dmc, void* addr, unsigned int val)
{
    // TODO
    int index = addr_to_set(addr);
    cache_line *arr = dmc -> cache;
    unsigned int * temp = arr[index].mem -> data;
    *temp = val;
    mm_write(dmc->mm, MAIN_MEMORY_START_ADDR + (int) addr * MAIN_MEMORY_BLOCK_SIZE, arr[index].mem);

    // arr[index].mem -> data = val;
}

unsigned int dmc_load_word(direct_mapped_cache* dmc, void* addr)
{
    // TODO
    int index = addr_to_set(addr);
    cache_line *arr = dmc -> cache;
    // printf("%d", arr[index].mem);
    if(arr[index].mem != 0){
        mb_free(arr[index].mem);
    }
    memory_block * temp = mm_read(dmc->mm, MAIN_MEMORY_START_ADDR + (int) addr * MAIN_MEMORY_BLOCK_SIZE);
    // memory_block * temp = mb_new((dmc -> mm) + (int) addr, DIRECT_MAPPED_NUM_SETS_LN, (dmc -> mm) + (int) addr);
    arr[index].mem = temp;
    // printf("%d", temp->data);
    unsigned int * out = arr[index].mem->data;

    return (*out);
}

void dmc_free(direct_mapped_cache* dmc)
{
    // TODO
}