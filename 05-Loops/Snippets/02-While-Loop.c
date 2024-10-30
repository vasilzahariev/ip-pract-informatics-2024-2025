#include <stdio.h>

int main() {
    const unsigned short k_maxLettersToPrint = 10;
    char character = 0;

    scanf("%c", &character);

    if (character < 'a' || character > 'z') {
        printf("Invalid input\n");

        return 1;
    }

    unsigned short lettersPrinted = 0;

    // Executes the block of code while the condition is true
    while (character <= 'z' && lettersPrinted < 10) {
        printf("%c\n", character);

        ++character;
        ++lettersPrinted;
    }

    return 0;
}
