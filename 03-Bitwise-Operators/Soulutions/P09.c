#include <stdio.h>

int main() {
    const unsigned int k_first3BitsMask = 0b111;

    unsigned int number = 0;

    scanf("%u", &number);
    printf("%u", number ^ k_first3BitsMask);

    return 0;
}
