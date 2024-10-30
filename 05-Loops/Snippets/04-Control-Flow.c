#include <stdio.h>

int main() {
    unsigned oddNumbersToPrintCount;

    scanf("%u", &oddNumbersToPrintCount);

    unsigned printedOddNumbersCount = 0;
    for (unsigned number = 1; number <= 100; number++) {
        if (number % 2 == 0) {
            // Skips the rest of the loop and goes to the next iteration
            continue;
        }

        printf("%d\n", number);
        ++printedOddNumbersCount;

        if (printedOddNumbersCount >= oddNumbersToPrintCount) {
            // Breaks the loop, which means it exits the loop
            break;
        }
    }

    // Usually continue and break can be avoided by using a more complex condition in the loop
    // Example:
    /*
        for (unsigned number = 2; number <= 100 && printedOddNumbersCount < oddNumbersToPrintCount; number += 2) {
            printf("%d\n", number);
            ++printedOddNumbersCount;
        }
    */

    return 0;
}
