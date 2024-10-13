#include <stdio.h>
#include <math.h>

int main() {
    int number = 0;

    scanf("%d", &number);

    int digits = floor(log10(number)) + 1;
    short has3Digits = digits == 3;

    printf("%hd\n", has3Digits);

    return 0;
}
