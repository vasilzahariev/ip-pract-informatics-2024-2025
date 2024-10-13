#include <stdio.h>
#include <math.h>

int main() {
    int number = 0;

    scanf("%d", &number);

    short digit3 = number % 10;
    int digit3Power3 = pow(digit3, 3);
    number /= 10;

    short digit2 = number % 10;
    int digit2Power3 = pow(digit2, 3);
    number /= 10;

    short digit1 = number % 10;
    int digit1Power3 = pow(digit1, 3);

    printf("Reversed: %hd%hd%hd\n", digit3, digit2, digit1);
    printf("Cool Sum: %d\n", digit1Power3 + digit2Power3 + digit3Power3);

    return 0;
}
