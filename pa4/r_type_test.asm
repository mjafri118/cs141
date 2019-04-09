nor $s2, $0, $0 #$s2 = -1
nor $s3, $0, $0 #$s3 = -1
add $s4, $s3, $s2 #$s4 = $s3 + $s2
srl $s5, $s4, 2 #shift $s4 (=-2) by 2
and $s1, $s3, $0
