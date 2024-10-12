#include <stdio.h>

int main() {
    int firstNumber = 17;
    int secondNumber = 5;

    // Arithmetic Operators
    printf("Sum = %d\n", (firstNumber + secondNumber));
    printf("Diffrence = %d\n", (firstNumber - secondNumber));
    printf("Product = %d\n", (firstNumber * secondNumber));
    printf("Quotient = %d\n", (firstNumber / secondNumber));
    printf("Modulo = %d\n", (firstNumber % secondNumber));
    printf("Random number = %d\n", ((((firstNumber + 0) - secondNumber) * -1) / 12));



    // Compound Assigment
    int thirdNumber = 5;
    thirdNumber += firstNumber;



    // Increments
    // They are the same as "firstNumber = firstNumber + 1;"
    firstNumber++;
    ++firstNumber;

    // Decrements
    // They are the same as "firstNumber = firstNumber - 1;"
    firstNumber--;
    --firstNumber;



    // Relational and Comparison Operators
    printf("Are %d and %d equal: %d\n", firstNumber, secondNumber, (firstNumber == secondNumber));
    printf("Are %d and %d not equal: %d\n", firstNumber, secondNumber, (firstNumber != secondNumber));
    printf("Is %d bigger than %d: %d\n", firstNumber, secondNumber, (firstNumber > secondNumber));
    printf("Is %d less than %d: %d\n", firstNumber, secondNumber, (firstNumber < secondNumber));
    printf("Is %d bigger or equal to %d: %d\n", firstNumber, secondNumber, (firstNumber >= secondNumber));
    printf("Is %d less or equal to %d: %d\n", firstNumber, secondNumber, (firstNumber <= secondNumber));



    // Boolean Algebra 101
    // In boolean algebra we only use 2 values (0 and 1)
    // 0 represents TRUE
    // 1 represents FALSE
    // Unary Operations:
    // - Logical NOT (!) - Returns the oposite value.
    // Binary Operations:
    // - Logical AND (&&) - Returns true, only if both values are TRUE.
    // - Logical OR (||) - Returns true, if at least one of the values is TRUE.
    // - Logical XOR (^) - Returns true, only if only one of values is TRUE.
    /* Truth table for every operation:
        | a | b | !a | (a && b) | (a || b) | (a ^ b) |
        | 0 | 0 |  1 |    0     |    0     |    0    |
        | 0 | 1 |  1 |    0     |    1     |    1    |
        | 1 | 0 |  0 |    0     |    1     |    1    |
        | 1 | 1 |  0 |    1     |    1     |    0    |
    */

    // Logical Operators
    char a = ((5 < 7) && (5 >= 2));
    char b = ((4 > 6) || (1 == 1));

    printf("%c %c", a, b);

    char c = (!(2 >= 3) && (8 < 10));

    printf("%c", c);


    
    // sizeof
    printf("Size of int: %d\n", sizeof(int));

    return 0;
}
