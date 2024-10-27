#include <stdio.h>

int main() {
    int firstNumber, secondNumber, thirdNumber;
    
    scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);

    int minNumber = firstNumber < secondNumber ? firstNumber : secondNumber;
    minNumber = minNumber < thirdNumber ? minNumber : thirdNumber;

    int maxNumber = firstNumber > secondNumber ? firstNumber : secondNumber;
    maxNumber = maxNumber > thirdNumber ? maxNumber : thirdNumber;

    int middleNumber = (firstNumber + secondNumber + thirdNumber) - minNumber - maxNumber;

    printf("%d %d %d\n", minNumber, middleNumber, maxNumber);

    return 0;
}
