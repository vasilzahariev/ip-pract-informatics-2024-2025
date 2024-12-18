#include <stdio.h>

#define CAPACITY 1024

int main() {
    char str[CAPACITY];

    // Reading a string using scanf
    // The scanf function reads a string until a whitespace character is encountered
    // The whitespace character is not stored in the string
    printf("Enter a string: ");
    scanf("%s", str);

    printf("You entered: %s\n", str);

    // scanf leaves the newline character in the input buffer
    // To clear the input buffer, we can use getchar
    // getchar reads a single character from the input buffer
    getchar();

    // Another way to clear the input buffer is to use fflush
    // fflush clears the output buffer
    // fflush(stdin) clears the input buffer
    fflush(stdin);

    // Reading a string using fgets
    // The fgets function reads a string until a newline character is encountered or the maximum number of characters is read
    // The newline character is stored in the string
    // fgets returns NULL if an error occurs, otherwise it returns the string
    // The fgets function is safer than scanf because it reads a fixed number of characters, preventing buffer overflow
    // stdin is the standard input stream
    printf("Enter a string: ");
    fgets(str, CAPACITY, stdin);

    printf("You entered: %s\n", str);

    return 0;
}
