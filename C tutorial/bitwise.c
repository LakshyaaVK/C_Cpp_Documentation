#include <stdio.h>

/*
Bitwise Operators in C

Bitwise operators work on bits and perform bit-by-bit operations.

&   Bitwise AND
|   Bitwise OR
^   Bitwise XOR (exclusive OR)
~   Bitwise NOT (one's complement)
<<  Left shift
>>  Right shift
*/

int main() {
    int a = 12;   // 12 = 00001100 in binary
    int b = 5;    //  5 = 00000101 in binary

    printf("a = %d, b = %d\n", a, b);

    printf("Bitwise AND (a & b): %d\n", a & b);      // 00001100 & 00000101 = 00000100 (4)
    printf("Bitwise OR  (a | b): %d\n", a | b);      // 00001100 | 00000101 = 00001101 (13)
    printf("Bitwise XOR (a ^ b): %d\n", a ^ b);      // 00001100 ^ 00000101 = 00001001 (9)
    printf("Bitwise NOT (~a): %d\n", ~a);            // ~00001100 = 11110011 (-13 in 2's complement)

    printf("Left shift  (a << 1): %d\n", a << 1);    // 00001100 << 1 = 00011000 (24)
    printf("Right shift (a >> 1): %d\n", a >> 1);    // 00001100 >> 1 = 00000110 (6)

    return 0;
}
//2s compliment = 1's compliment + 1
//1's compliment = invert all bits