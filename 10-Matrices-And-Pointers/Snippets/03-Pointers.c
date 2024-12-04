#include <stdio.h>

void changeValue(int* pointer);
int* findMinElement(int arr[], size_t size);

int main() {
    int value = 42;

    // The pointer is a variable that stores the memory address of another variable.
    // The pointer is declared by adding an asterisk (*) after the data type: <data_type>* <pointer_name>;
    // The "&" operator is used to get the memory address of a variable.
    int* pointer = &value;

    // To access the value of the variable through the pointer, you need to dereference the pointer.
    // The "*" operator is used to dereference the pointer: *<pointer_name>;
    // This way you can read and write the value of the variable through the pointer.
    ++(*pointer);

    *pointer += 10;

    // Memory addresses are usually represented in hexadecimal format.
    printf("%d %d %x\n", value, *pointer, pointer);

    // You can pass the pointer to a function and change the value of the variable through the pointer.
    changeValue(pointer);

    printf("%d %d %x\n", value, *pointer, pointer);

    int anotherValue = 504;
    // The const keyword can be used to declare a constant pointer.
    // The constant pointer cannot be reassigned to point to another memory address.
    int* const constPointer = &anotherValue;

    // Unless the pointer is of the const type, it can be reassigned to point to another memory address.
    pointer = &anotherValue;

    /*
        The next line will cause a compilation error:
        constPointer = &value;
    */

    printf("%d %d %x\n", value, *pointer, pointer);

    // We can also declare a pointer that cannot change the value of the variable.
    // The pointer is declared as a pointer to a constant value.
    const int* pointerThatCannotChangeTheValue = &value;

    /*
        The next line will cause a compilation error:
        *pointerThatCannotChangeTheValue = 100;
    */

    // If we don't want the pointer to change the value of the variable and the memory address, we can declare a constant pointer to a constant value.
    const int* const constPointerThatCannotChangeTheValue = &value;

    // The pointer can be set to NULL to indicate that it does not point to any memory address.
    // NULL == (void*)0.
    pointer = NULL;

    printf("%x\n", pointer);

    int arr[] = {30, 20, 10, 40, 50};
    int* minElement = findMinElement(arr, sizeof(arr) / sizeof(arr[0]));

    if (minElement == NULL) {
        printf("The array is empty.\n");
    } else {
        printf("The minimum element is %d.\n", *minElement);
    }

    return 0;
}

void changeValue(int* pointer) {
    *pointer = 100;
}

int* findMinElement(int arr[], size_t size) {
    if (size == 0) {
        return NULL;
    }

    int* minElement = &arr[0];

    for (size_t index = 1; index < size; ++index) {
        if (arr[index] < *minElement) {
            minElement = &arr[index];
        }
    }

    return minElement;
}
