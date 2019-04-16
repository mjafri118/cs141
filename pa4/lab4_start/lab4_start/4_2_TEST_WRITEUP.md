# 4.2 Testing
*Mohib and Victor*

_Our test cases in machine code were chosen as follows:_
1. Demonstrate I-type in spec.
2. Demonstrate LW/SW, AND that we can propagate different values now.

## Expected values
_Format: Assembly |   Comment/Result_

_Load Word Check_ <br>
ori $t2, $zero, 40          # $t2 gets 40 <br>
ori $t4, $zero, 25    # t4 gets 25                          <br>
sw $t4, 0($t2)        # write 25 into address40                 <br>
lw  $t5, 0($t2)        # t5 gets 25                 <br>
addi $s3, $zero, 69     #$s3 gets 69                        <br>

_Typical I-Type Check_<br>
nor $s0, $0, $0 #$s0= -1<br>
addi $s1, $s0, 4 #$s1 gets 3<br>
andi $s2, $s1, 3 #$s2 gets 3<br>
add $s3, $s2, $s1 #$s3 gets 6<br>


## Screenshot
_Load Word Check_
![https://i.imgur.com/0Y2Ji5V.png](https://i.imgur.com/0Y2Ji5V.png)

_I Type Check Check_
![https://i.imgur.com/sedr7gl.png](https://i.imgur.com/sedr7gl.png)
