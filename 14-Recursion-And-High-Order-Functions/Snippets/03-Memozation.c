#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n, int* memo);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int* fibonacciMemory = (int*) malloc((n + 1) * sizeof(int));
    
    for (int i = 0; i <= n; i++) {
        fibonacciMemory[i] = -1;
    }

    int result = fibonacci(n, fibonacciMemory);

    printf("Fibonacci of %d: %d\n", n, result);

    free(fibonacciMemory);

    return 0;
}

/*
    * Memoization
        Memoization is an optimization technique used to speed up recursive algorithms by storing the results of expensive function calls.
        When the same inputs occur again, the function can return the stored result instead of recalculating it.
        This technique is particularly useful for problems with overlapping subproblems, such as the Fibonacci sequence.
*/
int fibonacci(int n, int* fibonacciMemory) {
    if (n <= 1) {
        return n;
    }

    if (fibonacciMemory[n] != -1) {
        return fibonacciMemory[n];
    }

    fibonacciMemory[n] = fibonacci(n - 1, fibonacciMemory) + fibonacci(n - 2, fibonacciMemory);

    return fibonacciMemory[n];
}
