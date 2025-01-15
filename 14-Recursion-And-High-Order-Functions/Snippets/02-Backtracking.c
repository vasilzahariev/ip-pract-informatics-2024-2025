#include <stdio.h>
#include <stdlib.h>

void printBinary(int n, char* str, int i);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    char* str = (char*) malloc(n + 1);

    printBinary(n, str, 0);

    free(str);

    return 0;
}


/*
    * Backtracking
        Backtracking is a technique for solving problems by trying different paths until a solution is found.
        If a path does not lead to a solution, the algorithm backtracks to the last valid position and tries a different path.
        Recursion is a common technique used in backtracking algorithms.
        Backtracking is useful for solving problems with multiple possible solutions.
*/
void printBinary(int n, char* str, int i) {
    if (i == n) {
        str[i] = '\0';
        
        printf("%s\n", str);

        return;
    }

    str[i] = '0';
    printBinary(n, str, i + 1);

    // Backtrack
    // This is where the function returns to the previous state and tries a different path
    str[i] = '1';
    printBinary(n, str, i + 1);
}
