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

    // Create cache - allocate array to the heap
    result -> cache = calloc(DIRECT_MAPPED_NUM_SETS, sizeof(cache_line));

    // printf("%d", size);
    // memory_block * temp = mb_new(0, size, source);
    cache_line *set = result->cache;
    for(int i = 0; i < DIRECT_MAPPED_NUM_SETS; i++) {
        set[i].valid = 0;
        set[i].dirty = 0;
    }

    // set = new cache_line [DIRECT_MAPPED_NUM_SETS];
    // malloc(sizeof(cache_line) * DIRECT_MAPPED_NUM_SETS);


    // Instantiate cache lines
    // cache_line *temp = result -> cache;
    // for(int i = 0; i < DIRECT_MAPPED_NUM_SETS; i++) {
    //     *(temp + i) = malloc(sizeof(cache_line));
    //     *(temp + i) -> mem = malloc(sizeof(memory_block));
    // }
    printf("dmc created\n");
    return result;
}

// Optional
// Calculates index of cache for given address
static int addr_to_set(void* addr)
{
    const int *address = &addr;
    int dress = *address;

    int offset = 0;
    offset = (int) (dress/4);
    offset = offset % DIRECT_MAPPED_NUM_SETS;
    // printf("%d\n", offset);

    return offset;
}


void dmc_store_word(direct_mapped_cache* dmc, void* addr, unsigned int val)
{
    // TODO
    // Get index of cache
    int index = addr_to_set(addr);
    cache_line *arr = dmc -> cache;

    // deref to unsigned int pointer for changing the value, write to main mem
    unsigned int * temp;
    if(arr[index].mem == 0){
        printf("%d\n", addr);
        arr[index].mem = mb_new(((int) addr)/MAIN_MEMORY_BLOCK_SIZE, DIRECT_MAPPED_NUM_SETS_LN, &val);
        printf("not seg yet\n");
        arr[index].valid = 1;
        arr[index].dirty = 1;
    } else {
        temp = arr[index].mem -> data;
        *temp = val;
        arr[index].dirty = 1;
        // mm_write(dm c->mm, MAIN_MEMORY_START_ADDR + (int) addr * MAIN_MEMORY_BLOCK_SIZE, arr[index].mem);
    }

}

unsigned int dmc_load_word(direct_mapped_cache* dmc, void* addr)
{
    // TODO
    // Get index of cache
    int index = addr_to_set(addr);
    cache_line *arr = dmc -> cache;
    unsigned int * out;
    // printf("%d", arr[index].mem);

    // If mem block exists figure out if it's what you want
    if((arr[index].mem != 0) && (arr[index].valid == 1)){
        if((int) arr[index].mem->start_addr == (int) addr * MAIN_MEMORY_BLOCK_SIZE){
            out = arr[index].mem->data;
            return(*out);
        } else if(arr[index].dirty == 1){
            mm_write(dmc->mm, MAIN_MEMORY_START_ADDR + (int) arr[index].mem->start_addr * MAIN_MEMORY_BLOCK_SIZE, arr[index].mem);
            mb_free(arr[index].mem);
        }
    }

    //Read in the mem block from main mem
    arr[index].mem = mm_read(dmc->mm, MAIN_MEMORY_START_ADDR + (int) addr * MAIN_MEMORY_BLOCK_SIZE);
    // printf("%d", arr[index].mem->start_addr);
    arr[index].valid = 1;
    // memory_block * temp = mb_new((dmc -> mm) + (int) addr, DIRECT_MAPPED_NUM_SETS_LN, (dmc -> mm) + (int) addr);
    // printf("%d", temp->data);

    // deref to integer for output
    out = arr[index].mem->data;
    return (*out);
}

void dmc_free(direct_mapped_cache* dmc)
{
    // TODO
    cache_line *arr = dmc -> cache;
    for(int i = 0; i < DIRECT_MAPPED_NUM_SETS; i++){
        if(arr[i].mem != 0){
            mb_free(arr[i].mem);
        }
    }
    free(arr);
    free(dmc);
}