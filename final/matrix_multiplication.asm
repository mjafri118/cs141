
multiply:
  lw $t1, 0($a0)    # load index of B from $a0 into $t1
  lw $t2, 0($a1)    # load index of C from $a1 into $t2
  mul $t3, $t1, $t2   # multiply B and C into $t3
  add $t0, $t3, $t0   # increment value at A index by $t3 - EOF


# need three loops - one to move row A and row B, one to move col A and col C, one to move col B and row C
# assume $s0 stores first addr of A, $s1 first addr of B, $s2 first addr of C
addi $s6, $0, 8   # initialize length of the array
addi $s7, $0, 7   # initialize limit to the loops
addi $t7, $0, 0   # initialize I loop counter


forI:
  addi $t8, $0, 0   # initialize J loop counter
  forJ:
    # writing into A index
    addi $t0, $0, 0   # initialize value for A index
    addi $t9, $0, 0   # initialize K loop counter
    $s3   # EDIT HERE - setting up A index for writing
    forK:
      # now do math on the addresses
      mul $s4, $t7, $s6    # find B address - multiply row of B w/ length of row
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

      # insert transition stuff here

    endK:

      beq $t9, $s7, forJ    # if K limit reached jump out to J loop

    beq $t8, $s7, forI    # if J limit reached jump out to I loop

  beq $t7, $s7, finish  # if I limit reached jump to end

finish
