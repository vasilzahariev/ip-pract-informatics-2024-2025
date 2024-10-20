#include <stdio.h>

int main() {
    int number = 0;

    scanf("%d", &number);

    int signMask = number >> 31; // If the number is negative signMask will have a value of -1 (which is 11111111 11111111 11111111 11111111)
    unsigned int absNumber = (number ^ signMask) - signMask;

    printf("%u", absNumber);

    return 0;
}
