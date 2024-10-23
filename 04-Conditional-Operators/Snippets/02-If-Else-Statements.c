#include <stdio.h>

int main() {
    // If-Else Statements
    int examScore = 0;

    scanf("%d", &examScore);

    // If statement
    if (examScore > 100 || examScore < 0) {
        printf("Invalid score\n");

        return 1; // Exit the program with an error code
    }

    // If-Else statements
    if (examScore >= 90) {
        printf("A\n");
    } else if (examScore >= 80) {
        printf("B\n");
    } else if (examScore >= 70) {
        printf("C\n");
    } else if (examScore >= 60) {
        printf("D\n");
    } else {
        printf("F\n");
    }



    /*
        Short circuit evaluation example
        These examples are valid for any logical expreesion that uses the logical AND (&&) and logical OR (||) operators.
    */
    int firstNumber = 4;
    int secondNumber = 5;

    // The first condition is true, so the second condition is not evaluated
    // This is because the logical OR operator requires only one condition to be true
    // And if the first condition is true, the result will be true regardless of the second condition
    if ((++secondNumber == 6) || (firstNumber-- < 4)) {
        // Directly goes here without evaluating the second statement
        // Which means the value of firstNumber will not be decremented
        printf("1 -> if\n");
    } else {
        printf("1 -> else\n");
    }

    printf("%d %d\n", firstNumber, secondNumber); // 4 6

    int thirdNumber = 4;
    int fourthNumber = 5;

    // The first condition is false, so the second condition will not be evaluated
    // This is because the logical AND operator requires both conditions to be true
    // And if the first condition is false, the result will be false regardless of the second condition
    if ((thirdNumber-- < 4) && (++fourthNumber == 6)) {
        printf("2 -> if\n");
    } else {
        // Directly goes here without evaluating the second statement
        // Which means the value of fourthNumber will not be incremented
        printf("2 -> else\n");
    }

    printf("%d %d\n", thirdNumber, fourthNumber); // 3 5

    return 0;
}
