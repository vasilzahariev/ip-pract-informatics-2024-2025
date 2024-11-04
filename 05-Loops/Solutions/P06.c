#include <stdio.h>
#include <math.h>

int main() {
    int firstNumber = 0;
    int secondNumber = 0;

    scanf("%d %d", &firstNumber, &secondNumber);

    unsigned minNumber = fabs(firstNumber) < fabs(secondNumber) ? fabs(firstNumber) : fabs(secondNumber);
    int gcd = 1;

    for (unsigned divisor = 2; divisor <= minNumber; ++divisor) {
        if (firstNumber % divisor == 0 && secondNumber % divisor == 0) {
            gcd = divisor;
        }
    }

    printf("%d", gcd);

    return 0;
}
