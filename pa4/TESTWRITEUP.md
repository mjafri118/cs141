# 4.1 Testing
*Mohib and Victor*

_Our test cases in machine code were chosen as follows:_
1. Demonstrate every R-type in spec.
2. Demonstrate that register files can be properly overwritten (see and)
3. Demonstrate novel cases of shifting logical/arithmetic to show MSBs.

## Expected values
_Format: Assembly |   Machine |   Comment/Result_

nor $s0, $0, $0 |   00008027 |   #$s0= -1

nor $s1, $0, $0 |   00008827 |   #$s1 = -1

add $s0, $s1, $s0 |   02308020 |   #$s2 = $s1 + $s0 - expect 11.....10

srl $s2, $s0, 2 |   00109082 |   #shift $s2 (=-2) by 2 - expect 001......1

and $s1, $s1, $s1 |   02318824 |   #$s1 and with itself - expect 11......1

or $s3, $s2, $s1 |   02519825 |    #$s3 - expect 11......1

xor $s4, $s2, $s1 |   0251a026 |   #$s4 - expect 110.....0

sll $s5, $s2, 1 |   0012a840 |   #$s5 - expect 01.....10

sra $s6, $s5, 3 |   0015b0c3 |   #$s6 - expect 00001.....1

slt $s7, $s6, $s5 |   02d5b82a |   #$s7 - expect 000....01

sub $t8, $s5, $s6 |   02b6c022 |   #$t8 - expect 011011.....11


## Screenshot
![https://i.imgur.com/XMSYbOj.jpg](https://i.imgur.com/XMSYbOj.jpg)
