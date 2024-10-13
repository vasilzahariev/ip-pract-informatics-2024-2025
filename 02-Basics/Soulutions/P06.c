#include <stdio.h>
#include <math.h>

int main() {
    const char k_upperToLowerDifference = 'a' - 'A';
    char upperLetter = 0;

    scanf("%c", &upperLetter);

    char lowerLetter = upperLetter + k_upperToLowerDifference;

    printf("%c\n", lowerLetter);

    return 0;
}
