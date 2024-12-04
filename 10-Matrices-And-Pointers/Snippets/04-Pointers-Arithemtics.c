#include <stdio.h>

int main() {
    int value = 10;
    int* ptr = &value;

    // Pointer increment and decrement
    // Incrementing (decrementing) a pointer increases (decreeses) its value by the size of the data type it points to.
    printf("%x\n", ptr);
    ++ptr; // Incrementing the pointer
    printf("%x\n", ptr);
    --ptr; // Decrementing the pointer
    printf("%x\n", ptr);

    // Pointer addition and subtraction
    // Adding (subtracting) an integer to a pointer increases (decreases) its value by the size of the data type it points to multiplied by the integer.
    ptr += 5; // Adding 5 to the pointer
    printf("%x\n", ptr);
    ptr -= 5; // Subtracting 5 from the pointer
    printf("%x\n", ptr);

    // Pointer difference
    // Only possible when the two pointers have the same type.
    // The subtraction of two pointers gives the increments between them.
    int value2 = 123;
    int* ptr2 = &value2;

    printf("%d\n", ptr - ptr2);

    // Pointer comparison
    // Only possible when the two pointers have the same type.
    // We can compare two pointers using the relational operators.
    // Compare the memory addresses of the two pointers.
    int* ptr3 = NULL;
    printf("%d\n", ptr != ptr2);
    printf("%d\n", ptr3 == NULL);

    return 0;
}
