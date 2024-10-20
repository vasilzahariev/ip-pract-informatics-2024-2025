#include <stdio.h>

int main() {
    unsigned int firstNumber = 0;
    unsigned int secondNumber = 0;

    scanf("%u %u", &firstNumber, &secondNumber);

    printf("~firstNumber = %u\n", ~firstNumber);
    printf("~secondNumber = %u\n", ~secondNumber);
    printf("firstNumber & secondNumber = %u\n", firstNumber & secondNumber);
    printf("firstNumber | secondNumber = %u\n", firstNumber | secondNumber);
    printf("firstNumber ^ secondNumber = %u\n", firstNumber ^ secondNumber);

    return 0;
}
