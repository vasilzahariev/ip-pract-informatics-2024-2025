#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);

/*
    * High order function
        A high order function is a function that takes another function as an argument
        or returns a function as a result.
        To take a function as an argument, we need to declare a function pointer as a parameter.
    * Function pointer
        A function pointer is a variable that stores the address of a function
        Syntax: <return_type> (*pointer_name)(<parameter_type1>, <parameter_type2>, ...);
*/
int calculate(int a, int b, int (*operation)(int, int));

/*
    * Functions that return functions
        A function can return a function by declaring a function pointer as the return type.
        Syntax: <returned_function_return_type> (*function_name(<parameter_type1>, <parameter_type2>, ...))(<returned_function_parameter_type1>, <returned_function_parameter_type2>, ...);
*/
int (*getOperation(char op))(int, int);

int main() {
    int a;
    int b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    while (getchar() != '\n');

    char op;

    printf("Enter the operation (+ or -): ");
    scanf("%c", &op);

    // "operation" is a function pointer that stores the address of the function returned by getOperation
    int (*operation)(int, int) = getOperation(op);
    // Function pointers can be called like regular functions
    int result = operation(a, b);

    printf("Result of entered operation: %d\n", result);

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int calculate(int a, int b, int (*operation)(int, int)) {
    return operation(a, b);
}

int (*getOperation(char op))(int, int) {
    if (op == '+') {
        // When a function name is used by itself without parentheses, the value is a pointer to the function
        return add;
    } else if (op == '-') {
        return subtract;
    }
}
