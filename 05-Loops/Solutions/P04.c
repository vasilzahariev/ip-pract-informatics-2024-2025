#include <stdio.h>

int main() {
    unsigned number = 0;

    scanf("%u", &number);

    for (unsigned evenNumber = 2; evenNumber <= number; evenNumber += 2) {
        printf("%u\n", evenNumber);
    }

    return 0;
}
