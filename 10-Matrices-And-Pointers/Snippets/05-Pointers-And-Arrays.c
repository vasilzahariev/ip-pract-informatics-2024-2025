#include <stdio.h>

void doubleArray(int* arr, int size);
void printArray(const int* arr, int size);

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    // The relation between pointers and arrays is so close that pointers and arrays are often used interchangeably.
    // In the following statement, the pointer ptr is assigned the address of the first element of the array arr.
    // The pointer ptr can now be used to access the elements of the array arr.
    // The pointer ptr is said to point to the array arr.
    int* ptr = arr;

    doubleArray(ptr, 5);
    printArray(ptr, 5);

    return 0;
}

void doubleArray(int* arr, int size) {
    for (size_t index = 0; index < size; ++index) {
        // We can use the pointer arithmetics to access any element of the array.
        // The expression *(arr + index) is equivalent to arr[index].
        // printf("%d ", *(arr + index));
        *(arr + index) *= 2;
    }
}

void printArray(const int* arr, int size) {
    while (size--) {
        // Another way to access the elements of the array using the pointer arithmetics.
        printf("%d ", *arr++);
    }
    
    printf("\n");
}
