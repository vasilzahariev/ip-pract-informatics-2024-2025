#include <stdio.h>
#include <stdlib.h>

int main() {
    // Strings are arrays of characters
    // Strings are null-terminated, meaning they end with a null character '\0'
    // The null character is used to indicate the end of the string
    // The null character is not displayed when the string is printed

    // Strings can be declared in two ways:
    // 1. Using character array
    // When using character array, the null character must be explicitly added
    const char str1[] = { 'H', 'e', 'l', 'l', 'o', '\0' };

    // 2. Using string literal
    // When using string literal, the null character is automatically added
    const char str2[] = "World";

    // Strings can also be declared using the char pointer
    // When using char pointer, the null character is automatically added
    const char* str3 = "Hello, World!";

    // Strings can be dynamically allocated using malloc
    // The null character must be explicitly added
    char* str4 = (char*)malloc(6);
    str4[0] = 'H';
    str4[1] = 'e';
    str4[2] = 'l';
    str4[3] = 'l';
    str4[4] = 'o';
    str4[5] = '\0';

    free(str4);

    // Strings can be printed using printf
    printf("%s, %s\n", str1, str2);

    return 0;
}
