#include <stdio.h>

int main() {
    int number = 0;

    scanf("%d", &number);

    printf("%hd", (number % 10));

    return 0;
}
