#include <stdio.h>

#define ROWS_CAPACITY 100
#define COLS_CAPACITY 100

void readMatrix(int matrix[][COLS_CAPACITY], size_t rows, size_t cols);

void printMatrix(int matrix[][COLS_CAPACITY], size_t rows, size_t cols);

int main() {
    // This is how you can declare a 2 dimentional (2D) array aka matrix.
    int matrix[ROWS_CAPACITY][COLS_CAPACITY] = { 0 };

    size_t rows = 0;
    size_t cols = 0;

    scanf("%zu %zu", &rows, &cols);

    readMatrix(matrix, rows, cols);

    printMatrix(matrix, rows, cols);

    return 0;
}

void readMatrix(int matrix[][COLS_CAPACITY], size_t rows, size_t cols) {
    for (size_t row = 0; row < rows; ++row) {
        for (size_t col = 0; col < cols; ++col) {
            scanf("%d", &matrix[row][col]);
        }
    }
}

void printMatrix(int matrix[][COLS_CAPACITY], size_t rows, size_t cols) {
    for (size_t row = 0; row < rows; ++row) {
        for (size_t col = 0; col < cols; ++col) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
}
