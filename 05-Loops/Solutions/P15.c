#include <stdio.h>

int main() {
    unsigned rows = 0;

    scanf("%u", &rows);

    for (unsigned row = 1; row <= rows; ++row) {
        unsigned value = 1;

        for (unsigned col = 1; col <= row; ++col) {
            printf("%u ", value);
            value = (value * (row - col)) / col;
        }

        printf("\n");
    }

    return 0;
}