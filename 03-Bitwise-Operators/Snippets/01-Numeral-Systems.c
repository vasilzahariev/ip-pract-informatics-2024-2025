#include <stdio.h>

int main() {
    /*
        Decimal Numeral System
        What we use
        Has 10 values: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    */
    int decimalNumber = 2587;

    /*
        Binary Numeral System
        How the computer stores data
        Has 2 values: 0, 1
    */
    int binaryNumber = 0b101000011011;

    /*
        Hexadecimal Numeral System
        The memory addresses use this system
        It has a base value of 16
        Has 2 values: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F
    */
    int hexNumber = 0xA1B;

    printf("Decimal number: %d\n", decimalNumber);
    printf("Binary number: %d\n", binaryNumber);
    printf("Hex number: %d\n", hexNumber);


    /*  Conversion Table
        
        Decimal -> Binary -> Hexadecimal
           0    ->  0000  ->      0
           1    ->  0001  ->      1
           2    ->  0010  ->      2
           3    ->  0011  ->      3
           4    ->  0100  ->      4
           5    ->  0101  ->      5
           6    ->  0110  ->      6
           7    ->  0111  ->      7
           8    ->  1000  ->      8
           9    ->  1001  ->      9
           10   ->  1010  ->      A
           11   ->  1011  ->      B
           12   ->  1100  ->      C
           13   ->  1101  ->      D
           14   ->  1110  ->      E
           15   ->  1111  ->      F
    */

    /*
        Conversions

        You can read about them here: https://www.geeksforgeeks.org/hexadecimal-number-system/
    */

    return 0;
}
