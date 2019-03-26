loop: add $s0, $s1, $s2 # $s0 = $s1 + $s2
lw $t4, 0($s0)
lw $t3, 0($s1)
bne $t3, $t4, loop
addi $s0, $s0, 1 # $0++
