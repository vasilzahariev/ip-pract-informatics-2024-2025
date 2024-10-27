#include <stdio.h>
#include <math.h>

int main() {
    const double k_epsilon = 0.000001;

    double x = 0;
    double y = 0;
    double r = 0;

    scanf("%lf %lf %lf", &x, &y, &r);

    double distance = sqrt(x * x + y * y);

    printf("Distance: %lf\n", distance);

    double diffrence = distance - r;

    if (fabs(diffrence) < k_epsilon) {
        printf("The point is on the circle\n");
    } else if (diffrence > 0) {
        printf("The point is outside the circle\n");
    } else {
        printf("The point is inside the circle\n");
    }

    return 0;
}
