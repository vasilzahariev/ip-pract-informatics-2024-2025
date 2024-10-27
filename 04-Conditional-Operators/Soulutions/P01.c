#include <stdio.h>

int main() {
    unsigned short age = 0;

    scanf("%hu", &age);

    if (age == 0) {
        printf("Invalid age\n");

        return 1;
    }

    printf("You are %s\n", (age >= 18 ? "an adult" : "a minor"));

    return 0;
}
