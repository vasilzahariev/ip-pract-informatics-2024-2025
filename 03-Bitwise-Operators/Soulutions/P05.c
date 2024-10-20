#include <stdio.h>

int main() {
    unsigned int number = 0;

    scanf("%u", &number);

    printf("Is even: \n", !(number & 1));

    return 0;
}
