#!/usr/bin/env python
#
# Template for MIPS assembler.py
#
# Usage:
#    python assembler_template.py [asm file] (testbench)
#    TYPE "testbench" AFTER ASM FILE TO RUN OUR CUSTOM TESTBENCH.
#    NOTE: THIS ASSUMES YOU HAVE A <fname>.machine FOR A <fname>.asm FILE

import sys, re

# ------------------ NUMBER CONVERSION HELPER FUNCTIONS ------------------

# converts a binary number to hex.
def bin_to_hex(x):
    y = hex(int(x,2))[2:]
    if len(y) < 8:
        y = (8-len(y))*"0" + y
    return y

# converts dec to binary with n bits.
def dec_to_bin(value, nbits):
    value = int(value)
    fill = "0"
    if value < 0:
        value = (abs(value) ^ 0xffffffff) + 1
        fill = "1"

    value = bin(value)[2:]
    if len(value) < nbits:
        value = (nbits-len(value))*fill + value
    if len(value) > nbits:
        value = value[-nbits:]
    return value

# ------------------ CONSTANTS ------------------

rtypes = [
    # List of all R-type instructions.
    'sll', 'srl', 'sra', 'sllv', 'srlv', 'srav', 'jr', 'jalr', 'syscall', 'break', 'mfhi', 'mthi', 'mflo',
    'mtlo', 'mult', 'multu', 'div', 'divu', 'add', 'addu', 'sub', 'subu', 'and', 'or', 'xor', 'nor', 'slt', 'sltu'
]

# Fill in mapping from instruction to its opcode.
op_codes = {
    'rtype' : dec_to_bin(0, 6),
    'j'     : dec_to_bin(2, 6),
    'jal'   : dec_to_bin(3, 6),
    'beq'   : dec_to_bin(4, 6),
    'bne'   : dec_to_bin(5, 6),
    'addi'  : dec_to_bin(8, 6),
    'slti'  : dec_to_bin(10, 6),
    'andi'  : dec_to_bin(12, 6),
    'ori'  : dec_to_bin(13, 6),
    'xori'  : dec_to_bin(14, 6),
    'lw'    : dec_to_bin(35, 6),
    'sw'    : dec_to_bin(43,6),
    'nop'   : dec_to_bin(0,6)
}

# Fill in function codes.
function_codes = {
    'sll'   : dec_to_bin(0, 6),
    'srl'   : dec_to_bin(2, 6),
    'sra'   : dec_to_bin(3, 6),
    'sllv'  : dec_to_bin(4, 6),
    'srlv'  : dec_to_bin(6, 6),
    'srav'  : dec_to_bin(7, 6),
    'jr'    : dec_to_bin(8, 6),
    'jalr'  : dec_to_bin(9, 6),
    'syscall'   : dec_to_bin(12, 6),
    'break'     : dec_to_bin(13, 6),
    'mfhi'  : dec_to_bin(16, 6),
    'mthi'  : dec_to_bin(17, 6),
    'mflo'  : dec_to_bin(18, 6),
    'mtlo'  : dec_to_bin(19, 6),
    'mult'  : dec_to_bin(24, 6),
    'multu' : dec_to_bin(25, 6),
    'div'   : dec_to_bin(26, 6),
    'divu'  : dec_to_bin(27, 6),
    'add'   : dec_to_bin(32, 6),
    'addu'  : dec_to_bin(33, 6),
    'sub'   : dec_to_bin(34, 6),
    'subu'  : dec_to_bin(35, 6),
    'and'   : dec_to_bin(36, 6),
    'or'    : dec_to_bin(37, 6),
    'xor'   : dec_to_bin(38, 6),
    'nor'   : dec_to_bin(39, 6),
    'slt'   : dec_to_bin(42, 6),
    'sltu'  : dec_to_bin(43, 6),
}

# registers referenced by name
registers = {

    '$zero' : dec_to_bin(0, 5),
    '$at'   : dec_to_bin(1, 5),
    '$v0'   : dec_to_bin(2, 5),
    '$v1'   : dec_to_bin(3, 5),
    '$a0'   : dec_to_bin(4, 5),
    '$a1'   : dec_to_bin(5, 5),
    '$a2'   : dec_to_bin(6, 5),
    '$a3'   : dec_to_bin(7, 5),
    '$t0'   : dec_to_bin(8, 5),
    '$t1'   : dec_to_bin(9, 5),
    '$t2'   : dec_to_bin(10, 5),
    '$t3'   : dec_to_bin(11, 5),
    '$t4'   : dec_to_bin(12, 5),
    '$t5'   : dec_to_bin(13, 5),
    '$t6'   : dec_to_bin(14, 5),
    '$t7'   : dec_to_bin(15, 5),
    '$s0'   : dec_to_bin(16, 5),
    '$s1'   : dec_to_bin(17, 5),
    '$s2'   : dec_to_bin(18, 5),
    '$s3'   : dec_to_bin(19, 5),
    '$s4'   : dec_to_bin(20, 5),
    '$s5'   : dec_to_bin(21, 5),
    '$s6'   : dec_to_bin(22, 5),
    '$s7'   : dec_to_bin(23, 5),
    '$t8'   : dec_to_bin(24, 5),
    '$t9'   : dec_to_bin(25, 5),
    '$k0'   : dec_to_bin(26, 5),
    '$k1'   : dec_to_bin(27, 5),
    '$gp'   : dec_to_bin(28, 5),
    '$sp'   : dec_to_bin(29, 5),
    '$fp'   : dec_to_bin(30, 5),
    '$ra'   : dec_to_bin(31, 5),

    '$0' : dec_to_bin(0, 5),
    '$1'   : dec_to_bin(1, 5),
    '$2'   : dec_to_bin(2, 5),
    '$3'   : dec_to_bin(3, 5),
    '$4'   : dec_to_bin(4, 5),
    '$5'   : dec_to_bin(5, 5),
    '$6'   : dec_to_bin(6, 5),
    '$7'   : dec_to_bin(7, 5),
    '$8'   : dec_to_bin(8, 5),
    '$9'   : dec_to_bin(9, 5),
    '$10'   : dec_to_bin(10, 5),
    '$11'   : dec_to_bin(11, 5),
    '$12'   : dec_to_bin(12, 5),
    '$13'   : dec_to_bin(13, 5),
    '$14'   : dec_to_bin(14, 5),
    '$15'   : dec_to_bin(15, 5),
    '$16'   : dec_to_bin(16, 5),
    '$17'   : dec_to_bin(17, 5),
    '$18'   : dec_to_bin(18, 5),
    '$19'   : dec_to_bin(19, 5),
    '$20'   : dec_to_bin(20, 5),
    '$21'   : dec_to_bin(21, 5),
    '$22'   : dec_to_bin(22, 5),
    '$23'   : dec_to_bin(23, 5),
    '$24'   : dec_to_bin(24, 5),
    '$25'   : dec_to_bin(25, 5),
    '$26'   : dec_to_bin(26, 5),
    '$27'   : dec_to_bin(27, 5),
    '$28'   : dec_to_bin(28, 5),
    '$29'   : dec_to_bin(29, 5),
    '$30'   : dec_to_bin(30, 5),
    '$31'   : dec_to_bin(31, 5),
}

# Main function that translates assembly code into machine code.
def assem_to_machine(inst, operands, line_number):   #inst is string, operands is array of strings

    # Nop is a trivial 32 bits.
    if inst is "nop":
        return(bin_to_hex("".join(["0"]*32)))

    # Resolve op code
    opcode, type =  resolve_op_code(inst)

    # Deal with R-types
    if type is "r":
        assem = r_typeassem(inst, operands)

    # Deal with I-types
    if type is "i":
        assem = i_typeassem(inst, operands, line_number)

    # Deal with J-types
    if type in ["j", "jal"]:
        assem = j_typeassem(inst, operands)

    mach_code = opcode + assem
    return bin_to_hex(mach_code)

# ------------------ HELPERS TO TRANSLATION ------------------

# Gets an instruction and returns its op code.
def resolve_op_code(inst):
    if inst in rtypes:
        return 6*"0", "r"
    type = inst if inst in ["j", "jal"] else "i"
    return op_codes[inst], type

# returns machine code for r-type MIPS, excluding op code.
# op code 6 bits, rs 5 bits, rt 5 bits, rd 5 bits, shamt 5 bits, funct 6 bits
def r_typeassem(inst, operands):

    funct_code = str(function_codes[inst])

    rs, rt, rd, shamt = ["0"]*4 #instantiate

    # inst rd, rs, rt
    if inst in ["add","sub", "or", "xor", "nor", "slt","and","mult"]:
        rs = str(registers[operands[1]])
        rt = str(registers[operands[2]])
        rd = str(registers[operands[0]])
        shamt = str(dec_to_bin(0, 5))

    # inst rd, rt, shamt
    if inst in ["sll","sra","srl"]:
        rs = str(dec_to_bin(0,5))
        rt = str(registers[operands[1]])
        rd = str(registers[operands[0]])
        shamt = str(dec_to_bin(operands[2],5))

    # inst rs
    if inst == "jr":
        rs = str(registers[operands[0]])
        rt = str(dec_to_bin(0,5))
        rd = str(dec_to_bin(0,5))
        shamt = dec_to_bin(0, 5)

    mach_code = rs + rt + rd + shamt + funct_code
    return str(mach_code)

# returns machine code for i-type MIPS, excluding op code.
# op code 6 bits, rs 5 bits, rt 5 bits, imm 16 bits
def i_typeassem(inst, operands, line_number):

    rs, rt, imm = ["0"]*3

    # inst rt, rs, imm
    if inst in ["addi", "andi", "ori", "xori", "slti"]:
        rt = str(registers[operands[0]])
        rs = str(registers[operands[1]])
        imm = str(dec_to_bin(operands[2],16))

    # <bne beq ONLY> rs, rt, imm
    if inst in ["bne", "beq"]:
        rt = str(registers[operands[1]])
        rs = str(registers[operands[0]])
        imm = dec_to_bin((labels[operands[2]]) - int(line_number), 16)

    # inst rt, imm(rs)
    if inst in ["lw", "sw"]:
        rt = str(registers[operands[0]])
        rs = str(registers[operands[1].split("(")[1].split(")")[0]])
        imm = str(dec_to_bin(operands[1].split("($")[0],16))

    mach_code = rs + rt + imm
    return str(mach_code)

# returns machine code for j-type MIPS, excluding op code.
# op code 6 bits, addr 26 bits
def j_typeassem(inst, operands):
    addr = dec_to_bin(1048576 +  labels[operands[0]],26)
    return str(addr)

def main():

    # Optional testbench logic toggle.
    testbench = False
    if len(sys.argv) == 3:
        testbench = (sys.argv[2] == "testbench")
    me, fname = sys.argv[0], sys.argv[1]

    # --------------- Parse data from assembly file. ---------------

    f = open(fname, "r")
    global labels
    labels = {}        # Map from label to its address.
    parsed_lines = []  # List of parsed instructions.
    address = 0        # Track the current address of the instruction.
    line_count = 0     # Number of lines.
    for line in f:
        line_count = line_count + 1

        # Stores attributes about the current line of code, like its label, line
        # number, instruction, and arguments.
        line_attr = {}

        # Handle comments, whitespace.
        inst = line.split('#')[0].replace(',', '')
        commands = inst.split()

        if line:
            # We'll get you started here with line_count.
            line_attr['line_number'] = line_count

            # Handle labels
            index = 0
            if ':' in commands[index]:
                line_attr['label'] = commands[index].replace(':', '')
                labels[line_attr['label']] = line_count - 1
                index += 1

            # Parse the rest of the instruction and its register arguments.
            line_attr['instruction'] = commands[index]
            index += 1

            line_attr['operands'] = []
            while len(commands) > index:
                line_attr['operands'].append(commands[index])
                index += 1

            # Finally, add this dict to the complete list of instructions.
            parsed_lines.append(line_attr)
    f.close()

    machine_codes = []

    # --------------- Calculate all the machine codes from assembly
    # --------------- instructions/operands/line#s. ---------------
    for line in parsed_lines:
        machine_codes.append(assem_to_machine(line["instruction"],line['operands'], line['line_number']))

    # Print machine codes to serial, each on separate line.
    print("\r\n".join(machine_codes))

    # Run a little testbench we made.
    if testbench:
        # Test to see if we got it right!
        with open(fname.split(".")[0] + ".machine", "r") as f:
            answers = f.read().splitlines()
            for machine, answer, assembly in zip(machine_codes, answers, parsed_lines):
                if answer == str(machine):
                    print("Success: " + " ".join(str(vals) for vals in assembly.values()) + " --> " + machine )
                else:
                    print("Failed " + str(assembly) + ": " + "expected " + answer + ", got " + machine )

if __name__ == "__main__":
    main()
