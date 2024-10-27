#include <stdio.h>

int main() {
    const double k_rectStartX = 0.0;
    const double k_rectStartY = 0.0;
    const double k_rectEndX = 5.0;
    const double k_rectEndY = 5.0;

    double x = 0;
    double y = 0;

    scanf("%lf %lf", &x, &y);

    if (x < k_rectStartX || x > k_rectEndX || y < k_rectStartY || y > k_rectEndY) {
        printf("outside the area\n");
    } else if ((x == k_rectStartX || x == k_rectEndX) && (y == k_rectStartY || y == k_rectEndY)) {
        printf("on the border\n");
    } else {
        printf("inside the area\n");
    }

    return 0;
}
