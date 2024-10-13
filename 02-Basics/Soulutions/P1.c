#include <stdio.h>

int main() {
    int integer = -5;
    unsigned int u_integer = 5;
    double real = 5.5;
    char symbol = 'k';

    printf("Initial values: %d %u %lf %c\n", integer, u_integer, real, symbol);

    integer = -7;
    u_integer = 7;
    real = 7.7;
    symbol = 'v';

    printf("New values: %d %u %lf %c\n", integer, u_integer, real, symbol);

    return 0;
}
