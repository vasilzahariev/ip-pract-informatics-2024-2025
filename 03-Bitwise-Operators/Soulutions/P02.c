#include <stdio.h>

int main() {
    unsigned int number = 0;
    unsigned short bitsToShift = 0;

    scanf("%u %hu", &number, &bitsToShift);

    printf("%u << %u = %u\n", number, bitsToShift, (number << bitsToShift));
    printf("%u >> %u = %u\n", number, bitsToShift, (number >> bitsToShift));

    return 0;
}
