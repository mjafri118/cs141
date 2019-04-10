nor $s0, $0, $0 #$s0= -1
nor $s1, $0, $0 #$s1 = -1
add $s0, $s1, $s0 #$s2 = $s1 + $s0 - expect 11.....10
srl $s2, $s0, 2 #shift $s2 (=-2) by 2 - expect 001......1
and $s1, $s1, $s1 #$s1 and with itself - expect 11......1
or $s3, $s2, $s1  #$s3 - expect 11......1
xor $s4, $s2, $s1 #$s4 - expect 110.....0
sll $s5, $s2, 1 #$s5 - expect 01.....10
sra $s6, $s5, 3 #$s6 - expect 00001.....1
slt $s7, $s6, $s5 #$s7 - expect 000....01
sub $t8, $s5, $s6 #$t8 - expect 011011.....11
