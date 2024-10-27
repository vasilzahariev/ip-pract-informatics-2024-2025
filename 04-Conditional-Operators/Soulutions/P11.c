#include <stdio.h>

int main() {
    double firstSide = 0;
    double secondSide = 0;
    double thirdSide = 0;

    scanf("%lf %lf %lf", &firstSide, &secondSide, &thirdSide);

    if (
        (firstSide <= 0 || secondSide <= 0 || thirdSide <= 0) ||
        (firstSide + secondSide <= thirdSide || firstSide + thirdSide <= secondSide || secondSide + thirdSide <= firstSide)
    ) {
        printf("not a triangle\n");
    } else if (firstSide == secondSide && secondSide == thirdSide) {
        printf("equilateral\n");
    } else if (firstSide == secondSide || firstSide == thirdSide || secondSide == thirdSide) {
        printf("isosceles\n");
    } else {
        printf("scalene\n");
    }

    return 0;
}
