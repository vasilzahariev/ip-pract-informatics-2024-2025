#include <stdio.h>

int main() {
    unsigned int number = 0;

    scanf("%u", &number);

    printf("%hd", (number & number - 1) == 0);

    return 0;
}
