#include <stdio.h>

int main() {
    double firstRectangleStartX = 0;
    double firstRectangleStartY = 0;
    double firstRectangleWidth = 0;
    double firstRectangleHeight = 0;

    scanf("%lf %lf %lf %lf", &firstRectangleStartX, &firstRectangleStartY, &firstRectangleWidth, &firstRectangleHeight);

    double firstRectangleEndX = firstRectangleStartX + firstRectangleWidth;
    double firstRectangleEndY = firstRectangleStartY + firstRectangleHeight;

    double secondRectangleStartX = 0;
    double secondRectangleStartY = 0;
    double secondRectangleWidth = 0;
    double secondRectangleHeight = 0;

    scanf("%lf %lf %lf %lf", &secondRectangleStartX, &secondRectangleStartY, &secondRectangleWidth, &secondRectangleHeight);

    double secondRectangleEndX = secondRectangleStartX + secondRectangleWidth;
    double secondRectangleEndY = secondRectangleStartY + secondRectangleHeight;

    if (firstRectangleEndX < secondRectangleStartX || firstRectangleStartX > secondRectangleEndX || firstRectangleEndY < secondRectangleStartY || firstRectangleStartY > secondRectangleEndY) {
        printf("0\n");

        return 1;
    }

    double intersectionStartX = firstRectangleStartX > secondRectangleStartX ? firstRectangleStartX : secondRectangleStartX;
    double intersectionStartY = firstRectangleStartY > secondRectangleStartY ? firstRectangleStartY : secondRectangleStartY;
    double intersectionEndX = firstRectangleEndX < secondRectangleEndX ? firstRectangleEndX : secondRectangleEndX;
    double intersectionEndY = firstRectangleEndY < secondRectangleEndY ? firstRectangleEndY : secondRectangleEndY;
    double intersectionWidth = intersectionEndX - intersectionStartX;
    double intersectionHeight = intersectionEndY - intersectionStartY;
    double intersactionArea = intersectionWidth * intersectionHeight;

    printf("%.2lf\n", intersactionArea);

    return 0;
}
