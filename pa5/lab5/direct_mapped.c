#include <stdint.h>
#include <string.h>
#include <stdio.h>
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

    cache_line *set = result->cache;

    // Iterate over every set, set to 0.
    for(int i = 0; i < DIRECT_MAPPED_NUM_SETS; i++) {
        set[i].valid = 0;
        set[i].dirty = 0;
    }

    return result;
}

// Optional
// Calculates index of cache for given address
// Units of return value: cache index, # sets to advance by
static int addr_to_set(void* addr)
{
    int offset = ((long) addr/MAIN_MEMORY_BLOCK_SIZE) % DIRECT_MAPPED_NUM_SETS;
    // printf("Index: %d\n", offset);
    return offset;
}


void dmc_store_word(direct_mapped_cache* dmc, void* addr, unsigned int val)
{
    ++dmc->cs.w_queries;
    // Get index of cache

    // Precompute start address of memory block IN BYTES (size_t in bytes)
    size_t addr_offt = (size_t) (addr - MAIN_MEMORY_START_ADDR) % MAIN_MEMORY_BLOCK_SIZE;
    void* mb_start_addr = addr - addr_offt;
    int index = addr_to_set(mb_start_addr); // which cache line/set

    cache_line *arr = dmc -> cache;

    // deref to unsigned int pointer for changing the value, write to main mem
    unsigned int * temp;


    // if the cache is empty, write the data in. Miss.
    if(arr[index].mem == 0){
        ++dmc->cs.w_misses;

        // Load memory block from main memory
        memory_block* mb = mm_read(dmc->mm, mb_start_addr);

        // Update relevant word in memory block
        unsigned int* mb_addr = mb->data + addr_offt;

        // Update
        *mb_addr = val;
        arr[index].valid = 1;
        arr[index].dirty = 1;
        arr[index].mem = mb;

    // replacing what was in the filled cache with new value
    } else {
        // Check if the right block is in array: hit
        if((long) arr[index].mem->start_addr == (long) mb_start_addr){
            temp = arr[index].mem -> data + addr_offt;
            *temp = val;
            arr[index].dirty = 1;

        // miss: eviction and reading from memory
        } else {
            ++dmc->cs.w_misses;

            // eviction
            if(arr[index].dirty == 1){
                mm_write(dmc->mm, arr[index].mem->start_addr, arr[index].mem);
            }
            mb_free(arr[index].mem);

            // Load memory block from main memory
            memory_block* mb = mm_read(dmc->mm, mb_start_addr);

            // Update relevant word in memory block
            unsigned int* mb_addr = mb->data + addr_offt;

            // Update
            *mb_addr = val;
            arr[index].valid = 1;
            arr[index].dirty = 1;
            arr[index].mem = mb;

        }
    }

}

unsigned int dmc_load_word(direct_mapped_cache* dmc, void* addr)
{
    ++dmc->cs.r_queries;
    // TODO
    // Precompute start address of memory block IN BYTES (size_t in bytes)
    size_t addr_offt = (size_t) (addr - MAIN_MEMORY_START_ADDR) % MAIN_MEMORY_BLOCK_SIZE;
    void* mb_start_addr = addr - addr_offt;
    int index = addr_to_set(mb_start_addr); // which cache line/set

    cache_line *arr = dmc -> cache;

    // printf("Address: %d\n", addr);

    unsigned int* out;

    // If mem block exists figure out if it's what you want
    if((arr[index].mem != 0) && (arr[index].valid == 1)){

        // check if the tags are equal: means we have a hit.
        if((long) arr[index].mem->start_addr == (long)mb_start_addr){
            memory_block* mb = arr[index].mem;

            out = mb->data + addr_offt;
            // out = arr[index].mem->data;
            return(*out);

        // miss: eviction
        } else if(arr[index].dirty == 1){

            mm_write(dmc->mm, arr[index].mem->start_addr, arr[index].mem);
            // printf("\n-------SEGFAULT -----\n");
            mb_free(arr[index].mem);

        }

    }

    // After Eviction, Write New Data Into
    //Read in the mem block from main mem
    // memory_block* mb = mm_read(dmc->mm, mb_start_addr);
    memory_block* mb = mm_read(dmc->mm, mb_start_addr);
    unsigned int* mb_addr = mb->data + addr_offt;

    arr[index].mem = mb;
    arr[index].valid = 1;
    arr[index].dirty = 0;
    // memory_block * temp = mb_new((dmc -> mm) + (int) addr, DIRECT_MAPPED_NUM_SETS_LN, (dmc -> mm) + (int) addr);
    // printf("%d", temp->data);

    // Update statistics
    ++dmc->cs.r_misses;

    // deref to integer for output
    out = mb_addr;
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
