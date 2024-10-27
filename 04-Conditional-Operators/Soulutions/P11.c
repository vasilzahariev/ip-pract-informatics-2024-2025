#include <stdio.h>
#include <math.h>

int main() {
    const double k_epsilon = 0.000001;
    
    double firstSide = 0;
    double secondSide = 0;
    double thirdSide = 0;

    scanf("%lf %lf %lf", &firstSide, &secondSide, &thirdSide);

    if (
        (firstSide < k_epsilon || secondSide < k_epsilon || thirdSide < k_epsilon) ||
        (firstSide + secondSide < thirdSide + k_epsilon || firstSide + thirdSide < secondSide + k_epsilon || secondSide + thirdSide < firstSide + k_epsilon)
    ) {
        printf("not a triangle\n");
    } else if (firstSide == secondSide && secondSide == thirdSide) {
        printf("equilateral\n");
    } else if (fabs(firstSide - secondSide) < k_epsilon || fabs(firstSide - thirdSide) < k_epsilon || fabs(secondSide - thirdSide) < k_epsilon) {
        printf("isosceles\n");
    } else {
        printf("scalene\n");
    }

    return 0;
}
