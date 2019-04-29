## PA5 | Mohib and Victor

1. We use the LSBs for a DMC's mapping because we can therefore avoid spatial locality conflicts. If we used the MSBs, then several instructions that will be called in sequence would all map to the same cahceline and require calls to the main memory.

2. The DMC is the worst cache at this test - because the blocks are seperated by mutiples of 16 every memory block called in this test maps to the same cacheline. Thus, in the DMC, where a cacheline can only hold one value, the same cacheline will be used repeatedly, necessitating a main memory read/write for every fetch.
The FAC is the best cache at this test - because its single cacheline can hold 16 values, every address to be stored by this test will find a spot in the cache and no blocks will have to be replaced (in contrast to the DMC).

3. FAC will perform worst because, with 16 ways, as we need a 17th cache line, we must evict the earliest of the 16, meaning that, after 16 instructions, we have had to have erased all of the prior cache. SAC will perform best because it creates a balance between spacial locality, because when we see a conflict in the tag, we have multiple ways to buffer out those similarities in tags. Therefore, SAC is a better middle ground.

4. The DMC is the worst cache at this test - because there are 3 blocks of multiples of 8, the blocks will be assigned to cacheline 0 or 8 (assuming the base address is 0x0000). This means that at least 2 and potentially all three block will be mapped to the same cacheline, which will require more calls too and from mmain memory.
The SAC is the best cache at this test -
