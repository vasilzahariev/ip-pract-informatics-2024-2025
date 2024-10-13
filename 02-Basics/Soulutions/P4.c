#include <stdio.h>

int main() {
    int firstNumber = 0;
    int secondNumber = 0;
    int thirdNumber = 0;

    scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);

    double average = (firstNumber + secondNumber + thirdNumber) / 3.0;

    printf("%lf\n", average);

    return 0;
}
