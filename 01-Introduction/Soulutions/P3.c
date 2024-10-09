#include <stdio.h>

int main() {
    int firstNumber = 0;
    int secondNumber = 0;

    scanf("%d %d", &firstNumber, &secondNumber);

    int sum = firstNumber + secondNumber;

    printf("%d + %d = %d", firstNumber, secondNumber, sum);

    return 0;
}
