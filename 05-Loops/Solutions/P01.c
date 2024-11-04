#include <stdio.h>

int main() {
    unsigned finalNumber = 0;

    scanf("%u", &finalNumber);

    for (unsigned number = 1; number < finalNumber; ++number) {
        printf("%u", number);
    }

    return 0;
}
