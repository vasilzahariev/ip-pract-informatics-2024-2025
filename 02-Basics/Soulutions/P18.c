#include <stdio.h>

int main() {
    int x;
    int y;

    scanf("%d %d", &x, &y);

    short isYPositive = y > 0;
    short isYNegative = y < 0;
    short isXPositive = x > 0;
    short isXNegative = x < 0;
    
    short quadrant = 
        (isYPositive * (isXPositive * 1 + isXNegative * 2)) +
        (isYNegative * (isXNegative * 3 + isXPositive * 4))
    ;

    printf("%hd", quadrant);

    return 0;
}
