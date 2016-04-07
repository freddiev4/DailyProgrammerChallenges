# @Author: Ouss4
# @Github : github.com/Ouss4
# @Date: 02/04/2016
# @Description: Solution for Intermediate 0132.
#               I use named tuple to represent an instruction 
#               for the sake of code clairity.
#               To choose the right op code, I compare the arguments
#               with the patterns using regex.
#               The output is then formated as 3-digit hexadecimal number.

from collections import namedtuple
import re

Instruction = namedtuple("Instruction", "name args ops")

list_instructions = [
                     Instruction("AND",2, ("0x00", "0x01")), Instruction("OR", 2, ("0x02", "0x03")),
                     Instruction("XOR", 2, ("0x04", "0x05")), Instruction("NOT", 1, ("0x06",)),
                     Instruction("MOV", 2, ("0x07","0x08")), Instruction("RANDOM", 1, ("0x09",)),
                     Instruction("ADD", 2, ("0x0A","0x0B")), Instruction("SUB", 2, ("0x0C","0x0D")),
                     Instruction("JMP", 1, ("0x0E","0x0F")),
                     Instruction("JZ", 2, ("0x10","0x11","0x12","0x13")),
                     Instruction("JEQ", 3, ("0x14","0x15","0x16","0x17")),
                     Instruction("JLS", 3, ("0x18","0x19","0x1A","0x1B")),
                     Instruction("JGT", 3, ("0x1C","0x1D","0x1E","0x1F")),
                     Instruction("APRINT", 1, ("0x20","0x21")),
                     Instruction("DPRINT", 1, ("0x22","0x23")),
                     Instruction("HALT", 0, ("0xFF",))
                     ]

def getOpIndex(argsStr, args):

    if args == 0:
        index = 0
        
    elif args == 1:
        # The else part is for two (2) op codes instructions (JMP, APRINT,DPRINT).
        # Exp : JMP has one (1) argument but two (2) op codes (JMP [x] and JMP x).
        index = 0 if re.search(r'(^\[\d+?\])', argsStr) else 1
        
    elif args == 2:
        # JZ has two (2) arguments but four (4) op codes.
        if re.search(r'(^\[\d+?\]\s{1})(\[\d+?\]$)', argsStr):
            index = 0
        elif re.search(r'(^\[\d+?\]\s{1})(\d+?$)', argsStr):
            index = 1
        elif re.search(r'(^\d+?\s{1})(\[\d+?\]$)', argsStr):
            index = 2
        elif re.search(r'(^\d+?\s{1})(\d+?$)', argsStr):
            index = 3
            
    elif args == 3:
        if re.search(r'(^\[\d+?\]\s{1})(\[\d+?\]\s{1})(\[\d+?\]$)', argsStr):
           index = 0
        elif re.search(r'(^\d+?\s{1})(\[\d+?\]\s{1})(\[\d+?]$)', argsStr):
            index = 1
        elif re.search(r'(^\[\d+?\]\s{1})(\[\d+?\]\s{1})(\d+?$)', argsStr):
           index = 2
        elif re.search(r'(^\d+?\s{1})(\[\d+?\]\s{1})(\d+?$)', argsStr):
            index = 3

       
    return index

def getOpCode(fct, argsStr):
    ops = tuple()
    for ins in list_instructions:
        if ins.name == fct:
            ops = ins.ops
            args = ins.args
            break
        
    return ops[getOpIndex(argsStr, args)]

def evalFunction(argsStr, opCode):
    # Remove the '[' and the ']' from the args string.
    # And add '0x' for hexadecimal format and leading '0's if necessary.
    trimArgs = " ".join(["0x" + c.zfill(3) for c in (re.sub(r'\[|\]', '', argsStr)).split()]) 
    return opCode + " " + trimArgs

def evalEntry(entry):        
    entry_list = entry.split()
    fct = entry_list[0]
    #Join the args to apply a regex on the whole string.
    argsStr = " ".join(entry_list[1:])
    
    opCode = getOpCode(fct, argsStr) 
    return evalFunction(argsStr, opCode)


code = [
        "MOV [12] 0",
        "MOV [255] 0",
        "JEQ 6 [3] [1]",
        "ADD [3] 1",
        "ADD [2] [0]",
        "JMP 2",
        "MOV [0] [2]",
        "HALT"
        ]
for c in code:
    print(evalEntry(c))
