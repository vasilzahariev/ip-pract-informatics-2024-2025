#include <stdio.h>

int main() {
    int firstNumber = 0;
    int secondNumber = 0;

    scanf("%d %d", &firstNumber, &secondNumber);

    printf("a + b = %d\n", (firstNumber + secondNumber));
    printf("a - b = %d\n", (firstNumber - secondNumber));
    printf("a * b = %d\n", (firstNumber * secondNumber));
    printf("a / b = %d\n", (firstNumber / secondNumber));
    printf("a % b = %d\n", (firstNumber % secondNumber));
    printf("a == b -> %d\n", (firstNumber == secondNumber));
    printf("a != b -> %d\n", (firstNumber != secondNumber));
    printf("a > b -> %d\n", (firstNumber > secondNumber));
    printf("a < b -> %d\n", (firstNumber < secondNumber));
    printf("a >= b -> %d\n", (firstNumber >= secondNumber));
    printf("a <= b -> %d", (firstNumber <= secondNumber));

    return 0;
}
