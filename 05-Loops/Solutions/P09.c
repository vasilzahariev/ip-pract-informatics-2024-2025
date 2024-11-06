#include <stdio.h>

int main() {
    unsigned n = 0;

    scanf("%u", &n);

    unsigned prev = 1;
    unsigned current = 1;

    for (unsigned i = 3; i <= n; ++i) {
        unsigned next = prev + current;

        prev = current;
        current = next;
    }

    printf("%u\n", current);

    return 0;
}
