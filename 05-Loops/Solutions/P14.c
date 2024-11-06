#include <stdio.h>

int main() {
    unsigned rows = 0;

    scanf("%d", &rows);

    unsigned row = 1;
    while (row <= (rows * 2) - 1) {
        unsigned localRow = row <= rows ? row : ((2 * rows) - row);

        unsigned prefixSpacesCount = rows - localRow;
        for (unsigned space = 0; space < prefixSpacesCount; ++space) {
            printf(" ");
        }

        unsigned starsCount = (2 * localRow) - 1;
        for (unsigned star = 0; star < starsCount; ++star) {
            printf("*");
        }

        printf("\n");

        ++row;
    }

    return 0;
}