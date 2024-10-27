#include <stdio.h>
#include <math.h>

int main() {
    char operation = 0;
    double firstNumber = 0;
    double secondNumber = 0;
    double result = 0.0;

    scanf("%c", &operation);

    if (operation == 'V' || operation == '~') {
        scanf("%lf", &firstNumber);
    } else {
        scanf("%lf %lf", &firstNumber, &secondNumber);
    }

    switch (operation) {
        case '+':
            result = firstNumber + secondNumber;

            break;
        case '-':
            result = firstNumber - secondNumber;

            break;
        case '*':
            result = firstNumber * secondNumber;

            break;
        case '/':
            result = firstNumber / secondNumber;

            break;
        case '^':
            result = pow(firstNumber, secondNumber);

            break;
        case 'V':
            result = sqrt(firstNumber);

            break;
        case '~':
            result = fabs(firstNumber);

            break;
        default:
            printf("Invalid operation\n");
            
            return 1;
    }

    printf("%.2lf\n", result);

    return 0;
}
