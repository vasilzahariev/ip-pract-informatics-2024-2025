#include <stdio.h>

int factorial(int n);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int result = factorial(n);

    printf("Factorial of %d: %d\n", n, result);

    return 0;
}

/*
    * Recursion
        Recursion is a technique where a function calls itself.
        It is useful for solving problems that can be broken down into smaller, similar subproblems.
        The function must have a base case to prevent infinite recursion.
        The base case is the simplest form of the problem that can be solved directly.
        The function must also have a recursive case that breaks the problem down into smaller subproblems.
        The recursive case must eventually reach the base case.
*/
int factorial(int n) {
    // Base case
    if (n == 0) {
        return 1;
    }

    // Recursive case
    return n * factorial(n - 1);
}
