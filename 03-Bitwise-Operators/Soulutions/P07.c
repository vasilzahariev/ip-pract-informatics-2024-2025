#include <stdio.h>

int main() {
    unsigned int number = 0;
    unsigned short bitToSetPosition = 0;

    scanf("%u %hu", &number, &bitToSetPosition);

    unsigned int setMask = 1 << bitToSetPosition;

    printf("%u", number | setMask);

    return 0;
}
