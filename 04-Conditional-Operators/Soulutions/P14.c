#include <stdio.h>
#include <math.h>

int main() {
    int number = 0;

    scanf("%d", &number);

    int sqrtNumber = (int)sqrt(number);

    if (sqrtNumber * sqrtNumber == number) {
        printf("perfect square\n");
    } else {
        printf("not a perfect square\n");
    }

    return 0;
}
