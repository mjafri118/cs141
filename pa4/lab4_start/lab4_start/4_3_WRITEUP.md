# 4.3 Testing
*Mohib and Victor*

_Our test cases in assembly code were chosen as follows:_
1. Demonstrate J-type in spec.

## Expected values
_Format: Assembly |   Comment/Result_

_Comprehensive Check_ <br>
jal second<br>
nor $s0, $0, $0 # $s0 = -1<br>
j skip<br>
nor $s1, $0, $0 # not run<br>
second: nor $s2, $0, $0 # $s2 = -1<br>
nor $s3, $0, $0 # $s3 = -1<br>
jr $ra<br>
skip: nor $s4, $0, $0 #$s4 = -1<br>
addi $s5, $0, 4 # $s5 = 0+4 = 4<br>
addi $s6, $0, 1 # $s6 = 0+1 = 1<br>
sll $s6, $s6, 1 # $s6 = 1 << 1 = 2<br>
bne $s0, $0, target # $s0 != $0, so branch is taken<br>
addi $s1, $s1, 1 # not executed<br>
sub $s1, $s1, $s0 # not executed<br>
target: add $s1, $s1, $s5 # $s1 = 2+4 = 6<br>
sub $t0, $s1, $s5 # $t0 = 6-4 = 2<br>
beq $t0, $s6, end<br>
addi $s7, $s7, 1 # not executed<br>
sub $s7, $s7, $s0 # not executed<br>
end: addi $s7, $0, 3 # $s7 = 3<br>

## Screenshots

![https://i.imgur.com/Tf53mRl.png](https://i.imgur.com/Tf53mRl.png)

## Machine Code
If you'd to run it yourself, here it is!<br>
0c100004<br>
00008027<br>
08100007<br>
00008827<br>
00009027<br>
00009827<br>
03e00008<br>
0000a027<br>
20150004<br>
20160001<br>
0016b040<br>
16000002<br>
22310001<br>
02308822<br>
02358820<br>
02354022<br>
11160002<br>
22f70001<br>
02f0b822<br>
20170003<br>
