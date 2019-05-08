  addi $s6, $0, 8   # initialize length of the array
  addi $s7, $0, 7   # initialize limit to the loops
  addi $t7, $0, 0   # initialize I loop counter
forI:  addi $t8, $0, 0   # initialize J loop counter
forJ:  addi $t0, $0, 0   # initialize value for A index
  addi $t9, $0, 0   # initialize K loop counter
  forK:  mul $s4, $t7, $s6    # find B address - multiply row of B w/ length of row
      add $s4, $s4, $t9   # add k index to offset by column
      sll $s4, $s4, 2   # multiply by 4 to get offset by words
      add $s4, $s4, $s1   # add offset to base address for B stored in $s1
      mul $s5, $t9, $s6    # find C address - multiply row of C w/ length of row
      add $s5, $s5, $t8   # add j index to offset by column
      sll $s5, $s5, 2   # multiply by 4 to get offset by words
      add $s5, $s5, $s2   # add offset to base address for C stored in $s2
      lw $t1, 0($s4)    # load in word from B matrix
      lw $t2, 0($s5)    # load in word from C matrix
      mul $t3, $t1, $t2   # multiply B and C into $t3
      add $t0, $t3, $t0   # increment value at A index by $t3
      beq $t9, $s7, endK    # if K limit reached jump out of the loop
      addi $t9, $t9, 1    # iterate loop counter by 1
      j forK    # jump to beginning of loop
    endK: mul $s3, $t7, $s6    # find A address - multiply row of A w/ length of row
      add $s3, $s3, $t8   # add j index to offset by column
      sll $s3, $s3, 2   # multiply by 4 to get offset by column
      add $s3, $s3, $s0   #add offset to base address for A stored in $s0
      sw $t0, 0($s3)    # store word into memory
      beq $t8, $s7, endJ    # if J limit reached jump out to I loop
      addi $t8, $t8, 1    # iterate loop counter by 1
      j forJ    # jump to beginning of loop
  endJ:  beq $t7, $s7, finish  # if I limit reached jump to end
    addi $t7, $t7, 1    # iterate loop counter by 1
    j forI    # jump to beginning of loop
finish
