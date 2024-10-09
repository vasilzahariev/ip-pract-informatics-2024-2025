#include <stdio.h>

int main() {
    int firstNumber = 17;
    int secondNumber = 5;

    // Arithmetic Operators
    printf("Sum = %d\n", (firstNumber + secondNumber));
    printf("Diffrence = %d\n", (firstNumber - secondNumber));
    printf("Product = %d\n", (firstNumber + secondNumber));
    printf("Quotient = %d\n", (firstNumber / secondNumber));
    printf("Modulo = %d\n", (firstNumber % secondNumber));
    printf("Quotient = %d\n", (firstNumber / secondNumber));
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
    printf("Are %d and %d equal: %C", firstNumber, secondNumber, (firstNumber == secondNumber));
    printf("Are %d and %d not equal: %c", firstNumber, secondNumber, (firstNumber != secondNumber));
    printf("Is %d bigger than %d: %c", firstNumber, secondNumber, (firstNumber > secondNumber));
    printf("Is %d less than %d: %c", firstNumber, secondNumber, (firstNumber < secondNumber));
    printf("Is %d bigger or equal to %d: %c", firstNumber, secondNumber, (firstNumber >= secondNumber));
    printf("Is %d less or equal to %d: %c", firstNumber, secondNumber, (firstNumber <= secondNumber));



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
