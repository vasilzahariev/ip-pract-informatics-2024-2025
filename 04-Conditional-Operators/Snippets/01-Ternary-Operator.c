#include <stdio.h>

int main() {
    int firstNumber = 10;
    int secondNumber = 20;

    /*
        The ternary operator is a conditional operator that returns a value based on the evaluation of a condition.
        It is a shorthand way of writing an if-else statement in a single line of code.
        The ternary operator has the following syntax:
            <condition> ? <expression1> : <expression2>
        where:
            - <condition> is the condition that is evaluated.
            - <expression1> is the value returned if the condition is true.
            - <expression2> is the value returned if the condition is false.
    */
    int max = firstNumber > secondNumber ? firstNumber : secondNumber;

    printf("The maximum value is: %d\n", max);

    return 0;
}