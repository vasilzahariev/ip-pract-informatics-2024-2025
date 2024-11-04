#include <stdio.h>

int main() {
    unsigned long long binary = 0;

    scanf("%llu", &binary);

    int decimal = 0;
    int base = 1;
    while (binary) {
        unsigned digit = binary % 10;
        binary /= 10;

        if (digit > 1) {
            printf("Not a binary number!\n");

            return 1;
        }

        decimal += digit * base;
        base = base * 2;
    }

    printf("%d\n", decimal);

    return 0;
}
