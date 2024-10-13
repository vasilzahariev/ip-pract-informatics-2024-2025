#include <stdio.h>

int main() {
    int integer;
    unsigned int u_integer;
    double real;
    char symbol;

    scanf("%d %u %lf %c", &integer, &u_integer, &real, &symbol);

    printf("%d\n%u\n%lf\n%c\n", integer, u_integer, real, symbol);

    return 0;
}
