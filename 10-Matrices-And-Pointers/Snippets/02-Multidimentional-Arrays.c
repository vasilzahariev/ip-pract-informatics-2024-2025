#include <stdio.h>

int main() {
    // You can go as far as you want with the number of dimensions. (3D, 4D, 5D, 6D, ...)
    // But remember, the more dimensions you add, the harder it gets to manage the array.

    // This is how you can declare a 3D array with 2 planes, 3 rows, and 4 columns.
    int multidimentionalArray[2][3][4] = {
        {
            { 1, 2, 3, 4 },
            { 5, 6, 7, 8 },
            { 9, 10, 11, 12 }
        },
        {
            { 13, 14, 15, 16 },
            { 17, 18, 19, 20 },
            { 21, 22, 23, 24 }
        }
    };

    for (size_t i = 0; i < 2; ++i) {
        for (size_t j = 0; j < 3; ++j) {
            for (size_t k = 0; k < 4; ++k) {
                printf("%d ", multidimentionalArray[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
