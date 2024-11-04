#include <stdio.h>
#include <math.h>

int main() {
    unsigned number = 0;

    scanf("%u", &number);

    unsigned divisorsSum = 0;
    for (unsigned possibleDivisor = 1; possibleDivisor < number; ++possibleDivisor) {
        if (number % possibleDivisor == 0) {
            divisorsSum += possibleDivisor;
        }
    }

    printf("Prime: %d\n", number != 1 && divisorsSum == 1);
    printf("Perfect: %d\n", number == divisorsSum);

    return 0;
}
