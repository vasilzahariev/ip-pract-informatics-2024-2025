#include <stdio.h>

int main() {
    // Integer types
    char symbol = 'v';                          // 1 byte = 8 bits
    short short_integer = 10;                   // 2 bytes = 16 bits
    int integer = 10000;                        // 2/4 bytes = 16/32 bits
    long long_integer = -100000;                // 4 bytes = 32 bits
    long long very_long_integer = 10000000;     // 8 bytes = 64 bits

    // Unsigned Integer types (same sizes as the signed one, the difference is in the range)
    unsigned char u_symbol;
    unsigned int u_integer;
    unsigned short u_short_integer;
    unsigned long u_long_integer;
    unsigned long long u_very_long_integer;

    // Floating Point Number types
    float single_precision_real = 3.14;
    double double_precision_real = 3.141592;
    long double long_double_precision_real = 3.1415926535;

    // IMPORTANT: Numberic data types may have different range depending on the computer

    // In C, there is no boolean-specific type, we use the numeric values of 
    // 0 (false) and 1 (true). We can define them like this:
    #define BOOL char
    #define FALSE 0
    #define TRUE 1

    return 0;
}
