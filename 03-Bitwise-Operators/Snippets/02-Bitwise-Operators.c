#include <stdio.h>

int main() {
    unsigned int firstNumber = 5; // 8-bit binary representation:   00000101
    unsigned int secondNumber = 17; // 8-bit binary representation: 00010001

    printf("firstNumber = %u; secondNumber = %d\n", firstNumber, secondNumber);

    /* Truth table for every operation:
        | a | b | NOT a | (a AND b) | (a OR b) | (a XOR b) |
        | 0 | 0 |   1   |     0     |    0     |     0     |
        | 0 | 1 |   1   |     0     |    1     |     1     |
        | 1 | 0 |   0   |     0     |    1     |     1     |
        | 1 | 1 |   0   |     1     |    1     |     0     |
    */

    /*
        Bitwise NOT
        Unary operator
        This operator should be used carefully and you should always consider what is the type you're using (signed or unsigned)
        Takes a number and inverts all its bits.
        ~firstNumber -> 11111111111111111111111111111010 (unsgined int is 32 bits)
    */
    printf("~firstNumber = %u", ~firstNumber);

    /*
        Bitwise AND
        Binary operator
        Takes two numbers and does AND on each bit
        firstNumber & secondNumber = 00000001
    */
    printf("firstNumber & secondNumber = %u", firstNumber & secondNumber);

    /*
        Bitwise OR
        Binary operator
        Takes two numbers and does OR on each bit
        firstNumber | secondNumber = 00010101
    */
    printf("firstNumber | secondNumber = %u", firstNumber | secondNumber);

    /*
        Bitwise XOR
        Binary operator
        Takes two numbers and does XOR on each bit
        firstNumber ^ secondNumber = 00010100
    */
    printf("firstNumber ^ secondNumber = %u", firstNumber ^ secondNumber);

    /*
        Left shift
        Binary operator
        Avoid using this with negative numbers!
        Takes two numbers (number and n) and shifts the bits of "number" with "n" places to the left
        firstNumber << 1 = 00001010
    */
    printf("firstNumber << 1 = %u", firstNumber << 1);

    /*
        Right shift
        Binary operator
        Avoid using this with negative numbers!
        Takes two numbers (number and n) and shifts the bits of "number" with "n" places to the right
        firstNumber >> 1 = 00000010
    */
    printf("firstNumber >> 1 = %u", firstNumber >> 1);

    return 0;
}
