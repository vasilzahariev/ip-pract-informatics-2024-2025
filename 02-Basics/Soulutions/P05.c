#include <stdio.h>
#include <math.h>

int main() {
    const double k_pi = 3.14;
    double radius = .0;

    scanf("%lf", &radius);

    double area = k_pi * pow(radius, 2);

    printf("%lf\n", area);

    return 0;
}
