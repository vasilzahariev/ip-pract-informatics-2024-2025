#include <stdio.h>

int main() {
    // This variable is declared, but it isn't initialized, which means we 
    // haven't given it a value and we don't want what value it has (this is decided by the compiler)
    int variable1;

    // This variable is declared and initialized with a value of 5
    int variable2 = 5;

    // We declare an integer variable without initializing it...
    int variable3;

    // This is how we assign a literal value to it.
    variable3 = 17;

    // This is how we assign a value from another variable to it.
    variable3 = variable2; // Now variable3 has a value of 5

    // Constants
    const double PI = 3.14;
    const int constCopyOfVar = variable3;

    return 0;
}
