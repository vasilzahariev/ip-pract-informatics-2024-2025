#include <stdio.h>
#include <math.h>

int main() {
    double x = 0;
    double y = 0;

    scanf("%lf %lf", &x, &y);

    double distance = sqrt(pow(x - 0, 2) + pow(y - 0, 2));

    printf("%.2lf", distance);

    return 0;
}
