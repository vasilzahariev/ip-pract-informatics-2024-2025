#include <stdio.h>

int main() {
    int a = 0;
    int x = 0;
    int y = 0;
    int number = 0;
    int b = 0;
    int c = 0;

    scanf("%d %d %d %d %d %d", &a, &x, &y, &number, &b, &c);

    short numberDigit3 = number % 10;
    short numberDigit2 = (number / 10) % 10;
    short numberDigit1 = (number / 100) % 10;

    short bDigit3 = b % 10;
    short bDigit2 = (b / 10) % 10;
    short bDigit1 = (b / 100) % 10;
    short cDigit3 = c % 10;
    short cDigit2 = (c / 10) % 10;
    short cDigit1 = (c / 100) % 10;

    printf("q1 -> %hd", (!(a % 4) || !(a % 7)));
    printf("q2 -> %hd", (x || y));
    printf("q3 -> %hd", (x && y));
    printf("q4 -> %hd", (x ^ y));
    printf("q5 -> %hd", (numberDigit1 > numberDigit2 > numberDigit3 || numberDigit1 < numberDigit2 < numberDigit3));
    printf("q6 -> %hd", (bDigit3 == cDigit1 && bDigit2 == cDigit2 && bDigit1 && cDigit3));

    return 0;
}
