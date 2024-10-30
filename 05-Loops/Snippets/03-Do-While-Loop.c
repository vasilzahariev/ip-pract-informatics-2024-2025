#include <stdio.h>

int main() {
    int number = 1;

    // Executes the block of code once and then checks the condition.
    // If the condition is true, it will execute the block of code again.
    // It will keep executing the block of code until the condition is false.
    do {
        printf("Enter a positive number: ");
        scanf("%d", &number);
    } while (number <= 0);

    printf("The positive number is %d\n", number);

    return 0;
}
