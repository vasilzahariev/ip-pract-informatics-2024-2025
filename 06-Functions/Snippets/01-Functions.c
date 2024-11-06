#include <stdio.h>

// Function declaration.
// <return-type> <name>(<parameter-type-1> <parameter-name-1>, <parameter-type-2> <parameter-name-2>, ...);
int max(int number1, int number2);

// We can have declaration and definition at the same place.
int sum(int number1, int number2) {
    return number1 + number2;
}

// Functions that return only 0 or 1 (FALSE or TRUE) are called predicate functions.
char isEven(int number);

// When we don't want to return anything we use the "void" return type.
void printDate(int day, int month, int year);

int increment(int number);

/*
    C doesn't support function overloading and default arguments for functions. These are supported in C++.
*/

int main() {
    int num = 5;

    /*
        This will not increment "num", because for now we can only pass arguments into the functions by value.
        This means that when the function is called, the parameters in the function are initialized with the given values.
        In this case the "number" parameter will be initialized with the value of the "num" argument.
    */
    increment(num); // num = 5

    num = increment(num); // num = 6

    return 0;
}

// Function definition
int max(int number1, int number2) {
    return number1 > number2 ? number1 : number2;
}

char isEven(int number) {
    return !(number & 1);
}

void printDate(int day, int month, int year) {
    printf("%.2d/%.2d/%.4d", day, month, year);
}

int increment(int number) {
    number += 1;

    return number;
}
