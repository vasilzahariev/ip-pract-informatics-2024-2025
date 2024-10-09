#include <stdio.h>

int main() {
    short short_integer = 10;                   // 2 bytes = 16 bits
    int integer = 10000;                        // 2/4 bytes = 16/32 bits
    long long_integer = -100000;                // 4 bytes = 32 bits
    long long very_long_integer = 10000000;     // 8 bytes = 64 bits

    // IO for "char"s
    char symbol;
    scanf("%c", &symbol); // Input / Reading
    printf("%c", symbol); // Output / printing

    // IO for "integer"s (signed and unsigned)
    int integer;
    scanf("%d", &integer); // Input / Reading
    printf("%d\n", integer); // Output / printing

    // IO for "short"s (signed and unsigned)
    short short_integer;
    scanf("%hd", &short_integer); // Input / Reading
    printf("%hd\n", short_integer); // Output / printing

    // IO for "long"s (signed and unsigned)
    long long_integer;
    scanf("%ld", &long_integer); // Input / Reading
    printf("%ld\n", long_integer); // Output / printing

    // IO for "long long"s (signed and unsigned)
    long long long_long_integer;
    scanf("%lld", &long_long_integer); // Input / Reading
    printf("%lld\n", long_long_integer); // Output / printing

    // IO for "float"s (signed and unsigned)
    float single_percision;
    scanf("%f", &single_percision); // Input / Reading
    printf("%f\n", single_percision); // Output / printing

    // IO for integers (signed and unsigned)
    double double_precision;
    scanf("%lf", &double_precision); // Input / Reading
    printf("%lf\n", double_precision); // Output / printing

    // Formating the output (Read more: https://www.w3schools.com/c/ref_stdio_printf.php)
    // %[flags][width][.precision][length]specifier
    int day = 9;
    int month = 10;
    int year = 2024;
    double randomValue = 23.5465;

    printf("%02d.%02d.%04d -> %0.2lf", day, month, year, randomValue);

    return 0;
}
