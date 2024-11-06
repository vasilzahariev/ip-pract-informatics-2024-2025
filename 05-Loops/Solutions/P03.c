#include <stdio.h>

int main() {
    unsigned n = 0;

    scanf("%u", &n);

    unsigned sum = 0;
    for (unsigned number = 1; number <= n; ++number) {
        sum += number;
    }
    printf("n -> %u\n", sum);

    sum = 0;
    for (unsigned number = 1; number <= n; ++number) {
        sum += number * (number + 1);
    }
    printf("n(n+1) -> %u\n", sum);

    sum = 0;
    for (unsigned number = 1; number <= n; ++number) {
        sum += ((number * 2) - 1) * (number * 2);
    }
    printf("(2n-1)2n -> %u\n", sum);

    sum = 0;
    for (unsigned number = 1; number <= n; ++number) {
        sum += number * (number + 1) * (number + 2);
    }
    printf("n(n+1)(n+2) -> %u\n", sum);

    sum = 0;
    unsigned factorial = 1;
    for (unsigned number = 1; number <= n; ++number) {
        factorial *= number;
        sum += factorial;
    }
    printf("n! -> %u\n", sum);

    return 0;
}
