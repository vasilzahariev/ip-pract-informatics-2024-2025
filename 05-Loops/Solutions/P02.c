#include <stdio.h>

int main() {
    const unsigned short k_charSize = sizeof(char) * 7;

    for (unsigned char symbol = 0; symbol < k_charSize; ++symbol) {
        printf("%d -> %c\n", symbol, symbol);
    }

    return 0;
}
