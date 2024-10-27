#include <stdio.h>

int main() {
    int number = 0;

    scanf("%d", &number);

    if (number % 5 == 0 && number % 3 == 0) {
        printf("divisible by 5 and 3\n");
    } else if (number % 5 == 0) {
        printf("divisible by 5\n");
    } else if (number % 3 == 0) {
        printf("divisible by 3\n");
    } else {
        printf("not divisible by 5 or 3\n");
    }

    return 0;
}
