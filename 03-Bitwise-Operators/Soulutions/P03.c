#include <stdio.h>

int main() {
    unsigned short power = 0;

    scanf("%hu", &power);

    printf("%llu", (1ULL << power));

    return 0;
}
