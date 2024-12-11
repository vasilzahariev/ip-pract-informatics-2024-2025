#include <stdio.h>
#include <stdlib.h>

int main() {
    /** Dynamic memory allocation using malloc()
        - malloc() returns a void pointer, so we need to typecast it to the desired type
        - malloc() takes the size of the memory to be allocated in bytes as an argument
        - malloc() returns NULL if memory allocation fails
        - malloc() does not initialize the memory, so it contains garbage values
        - malloc() allocates memory on the heap
        - malloc() is defined in stdlib.h
     */
    int *p = (int *)malloc(sizeof(int));

    // We must always check if memory allocation was successful
    if (p == NULL) {
        printf("Memory allocation failed\n");

        return 1;
    }

    printf("%d\n", *p); // Random value

    *p = 10; // Assigning value to the memory location

    printf("%d\n", *p); // 10

    /** Freeing the allocated memory
     * We must always free the allocated memory to avoid memory leaks.
     * Memory leaks occur when we allocate memory but do not free it.
     * free() deallocates the memory allocated by malloc() or calloc() or realloc()
     * free() does not delete the pointer, it just deallocates the memory
     * free() is defined in stdlib.h
     * We should not access the memory after freeing it
     */
    free(p);


    /** Dynamic memory allocation for arrays
        - We can allocate memory for arrays using malloc()
        - We can access the elements of the array using the pointer
        - To create an array of 5 integers, we need to allocate memory for 5 integers
     */
    int* arr = (int*)malloc(5 * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");

        return 1;
    }

    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    /** Dynamic memory allocation using calloc()
        - calloc() initializes the memory to zero. It is similar to malloc(), but initializes the memory (sets all bits to zero)
        - calloc() is slower than malloc() because it initializes the memory
        - calloc() takes two arguments, the number of elements and the size of each element
        - calloc() returns a void pointer, so we need to typecast it to the desired type
        - calloc() returns NULL if memory allocation fails
        - calloc() allocates memory on the heap
        - calloc() is defined in stdlib.h
     */
    int* initializedArr = (int*)calloc(5, sizeof(int));

    if (initializedArr == NULL) {
        printf("Memory allocation failed\n");

        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", initializedArr[i]);
    }

    /** Dynamic memory allocation using realloc()
        - realloc() is used to change the size of the memory block
        - realloc() takes two arguments, the pointer to the memory block and the new size
        - realloc() returns a void pointer, so we need to typecast it to the desired type
        - realloc() returns NULL if memory allocation fails
        - realloc() allocates memory on the heap
        - realloc() is defined in stdlib.h
        - If the new size is greater than the old size, the new memory will be uninitialized
        - If the new size is smaller than the old size, the data will be truncated
        - If the pointer is NULL, realloc() behaves like malloc()
        - If the new size is 0, realloc() behaves like free()
        - If realloc() fails, the original memory block is left unchanged, meaning the original pointer is still valid and the memory is not freed
     */
    int* newArray = realloc(initializedArr, 10 * sizeof(int));

    if (newArray == NULL) {
        printf("Memory allocation failed\n");

        // We shouldn't forget to free the original memory block!
        free(initializedArr);

        return 1;
    }

    initializedArr = newArray;

    for (int i = 0; i < 10; i++) {
        initializedArr[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", initializedArr[i]);
    }

    free(initializedArr);

    return 0;
}
