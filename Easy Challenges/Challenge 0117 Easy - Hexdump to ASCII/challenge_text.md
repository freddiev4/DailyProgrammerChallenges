# [](#EasyIcon) *(Easy)*: Hexdump to ASCII
Hexadecimal is a base-16 representation of a number. A single byte of information, as an unsigned integer, can have a value of 0 to 255 in decimal. This byte can be represented in hexadecimal, from a range of 0x0 to 0xFF in hexadecimal.

Your job is to open a given file (using the given file name) and print every byte's hexadecimal value.

*Author: PoppySeedPlehzr*
# Formal Inputs & Outputs
## Input Description
As a program command-line argument to the program, accept a valid file name.
## Output Description
Print the given file's contents, where each byte of the file must be printed in hexadecimal form. Your program must print 16 bytes per line, where there is a space between each hexadecimal byte. Each line must start with the line number, starting from line 0, and must also count in hexadecimal.
# Sample Inputs & Outputs
## Sample Input
"MyFile.txt" (This file is an arbitrary file as an example)
## Sample Output

    00000000 37 7A BC AF 27 1C 00 03 38 67 83 24 70 00 00 00
    00000001 00 00 00 00 49 00 00 00 00 00 00 00 64 FC 7F 06
    00000002 00 28 12 BC 60 28 97 D5 68 12 59 8C 17 8F FE D8
    00000003 0E 5D 2C 27 BC D1 87 F6 D2 BE 9B 92 90 E8 FD BA
    00000004 A2 B8 A9 F4 BE A6 B8 53 10 E3 BD 60 05 2B 5C 95
    00000005 C4 50 B4 FC 10 DE 58 80 0C F5 E1 C0 AC 36 30 74
    00000006 82 8B 42 7A 06 A5 D0 0F C2 4F 7B 27 6C 5D 96 24
    00000007 25 4F 3A 5D F4 B2 C0 DB 79 3C 86 48 AB 2D 57 11
    00000008 53 27 50 FF 89 02 20 F6 31 C2 41 72 84 F7 C9 00
    00000009 01 04 06 00 01 09 70 00 07 0B 01 00 01 23 03 01
    0000000A 01 05 5D 00 00 01 00 0C 80 F5 00 08 0A 01 A8 3F
    0000000B B1 B7 00 00 05 01 11 0B 00 64 00 61 00 74 00 61
    0000000C 00 00 00 14 0A 01 00 68 6E B8 CF BC A0 CD 01 15
    0000000D 06 01 00 20 00 00 00 00 00
# Challenge Input
Give your program its own binary file, and have it print itself out!
## Challenge Input Solution
This is dependent on how you write your code and what platform you are on.
# Note
* As an added bonus, attempt to print out any ASCII strings, if such data is found in your given file.
				