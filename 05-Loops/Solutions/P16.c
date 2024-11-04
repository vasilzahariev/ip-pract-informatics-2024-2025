#include <stdio.h>

int main() {
    int firstNumber = 0;
    int secondNumber = 0;

    scanf("%d %d", &firstNumber, &secondNumber);

    int sum = firstNumber;
    int copyOfSecondNumber = secondNumber;
    while (copyOfSecondNumber != 0) {
        unsigned carry = sum & copyOfSecondNumber;

        sum ^= copyOfSecondNumber;
        copyOfSecondNumber = carry << 1;
    }
    printf("%d + %d = %d\n", firstNumber, secondNumber, sum);

    int difference = firstNumber;
    copyOfSecondNumber = secondNumber;
    while (copyOfSecondNumber != 0) {
        unsigned borrow = ~difference & copyOfSecondNumber;

        difference ^= copyOfSecondNumber;
        copyOfSecondNumber = borrow << 1;
    }
    printf("%d - %d = %d\n", firstNumber, secondNumber, difference);

    return 0;
}
