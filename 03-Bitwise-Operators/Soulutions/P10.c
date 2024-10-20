#include <stdio.h>

int main() {
    const unsigned int k_evenBitsMask = 0xAAAAAAAA;

    unsigned int number = 0;

    scanf("%u", &number);
    printf("%u", number ^ k_evenBitsMask);

    return 0;
}
