#include <stdio.h>

int main() {
    const unsigned k_bitsInInt = sizeof(int) * 8;

    int number = 0;

    scanf("%d", &number);

    if (number == 0 || number == 1) {
        printf("%d", number);

        return 0;
    }

    char canPrint = 0;

    for (int bitIndex = k_bitsInInt - 1; bitIndex >= 0; --bitIndex) {
        int bit = (number >> bitIndex) & 1;

        canPrint = canPrint || bit;

        if (canPrint) {
            printf("%d", bit);
        }
    }
    printf("\n");

    return 0;
}
