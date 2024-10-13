#include <stdio.h>
#include <math.h>

int main() {
    int firstNumber = 0;
    int secondNumber = 0;

    scanf("%d %d", &firstNumber, &secondNumber);

    printf("%d", ((int)pow(firstNumber, 3) + (int)pow(secondNumber, 3)));

    return 0;
}
