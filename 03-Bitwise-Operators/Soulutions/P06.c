#include <stdio.h>

int main() {
    unsigned int number = 0;
    unsigned short bitToClearPosition = 0;

    scanf("%u %hu", &number, &bitToClearPosition);

    unsigned int clearMask = ~(1 << bitToClearPosition);

    printf("%u", number & clearMask);

    return 0;
}
