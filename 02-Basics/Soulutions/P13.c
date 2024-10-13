#include <stdio.h>

int main() {
    int year;

    scanf("%d", &year);

    short isLeapYear = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

    printf("%hd", isLeapYear);
    
    return 0;
}
