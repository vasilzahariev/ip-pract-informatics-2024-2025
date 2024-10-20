#include <stdio.h>

int main() {
    unsigned int number = 0;
    unsigned short bitToFlipPosition = 0;

    scanf("%u %hu", &number, &bitToFlipPosition);

    unsigned int flipMask = 1 << bitToFlipPosition;

    printf("%u", number ^ flipMask);

    return 0;
}
