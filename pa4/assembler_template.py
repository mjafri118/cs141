#!/usr/bin/env python
#
# Template for MIPS assembler.py
#
# Usage:
#    python assembler_template.py [asm file]

import sys, re

def bin_to_hex(x):
    y = hex(int(x,2))[2:]
    if len(y) < 8:
        y = (8-len(y))*"0" + y
    return y

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

def assem_to_machine(inst, operands):   #inst is string, operands is array of strings
    mach_code = ""

    # Resolve op code

    # Deal with R-types

    # Deal with I-types

    # Deal with J-types

    return mach_code

def r_typeassem(inst, operands):
    mach_code = ""

    return mach_code

def i_typeassem(inst, operands):
    mach_code = ""

    return mach_code

def j_typeassem(inst, operands):
    mach_code = ""

    return mach_code

rtypes = [
    # List of all R-type instructions.
    'sll', 'srl', 'sra', 'sllv', 'srlv', 'srav', 'jr', 'jalr', 'syscall', 'break', 'mfhi', 'mthi', 'mflo',
    'mtlo', 'mult', 'multu', 'div', 'divu', 'add', 'addu', 'sub', 'subu', 'and', 'or', 'xor', 'nor', 'slt', 'sltu'
]

op_codes = {
    # Fill in mapping from instruction to its opcode.
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
}

function_codes = {
    # Fill in function codes.
    """currently all r-type functs
    'sll'   : dec_to_bin(00, 6),
    'srl'   : dec_to_bin(02, 6),
    'sra'   : dec_to_bin(03, 6),
    'sllv'  : dec_to_bin(04, 6),
    'srlv'  : dec_to_bin(06, 6),
    'srav'  : dec_to_bin(07, 6),
    'jr'    : dec_to_bin(08, 6),
    'jalr'  : dec_to_bin(09, 6),
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
    'sltu'  : dec_to_bin(43, 6),"""
}

registers = {
    #registers referenced by name
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

def main():
    me, fname = sys.argv

    f = open(fname, "r")
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
        #commands[0] = commands[0].replace(':', '')
        print commands

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

            print line_attr

            # Finally, add this dict to the complete list of instructions.
            parsed_lines.append(line_attr)
    f.close()

    machine = ""  # Current machine code word.

    for line in parsed_lines:
        instruction_line
        if line['instruction'] == 'nop':
            print 8*'0'
        elif line['instruction'] in rtypes:
            print "yes"
            # Encode an R-type instruction.
        else:
            print "yes"
            # Encode a non-R-type instruction.

        # # We'll get you started with jr.
        # if line['instruction'] == 'jr':
        #     print "fill out jr"
        #     # Fill out jr.

        # Finish handling the rest of the instructions (load/store, other jumps).
    print labels
if __name__ == "__main__":
    main()
