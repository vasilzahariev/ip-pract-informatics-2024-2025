#include <stdio.h>

int main() {
    const unsigned char k_IntegerSize = sizeof(unsigned int) * 8;
    unsigned int number = 0;
    unsigned short bitPosition = 0;

    scanf("%u %hu", &number, &bitPosition);

    printf("youngest bit = %hu\n", number & 1);
    printf("most significant bit = %hu\n", (number >> (k_IntegerSize - 1)) & 1);
    printf("nth bit = %hu\n", (number >> bitPosition) & 1);

    return 0;
}
