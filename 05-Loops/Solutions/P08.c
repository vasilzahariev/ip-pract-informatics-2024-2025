#include <stdio.h>
#include <math.h>

int main() {
    unsigned number = 0;

    scanf("%d", &number);

    const unsigned k_digitsCount = (unsigned)floor(log10(number)) + 1;
    unsigned reversed = 0;
    unsigned digitsSum = 0;
    unsigned narcissisticSum = 0;
    unsigned numberCopy = number;
    
    while (numberCopy != 0) {
        unsigned digit = numberCopy % 10;
        double digitPowed = pow(digit, k_digitsCount);

        reversed = (reversed * 10) + digit;
        digitsSum += digit;
        narcissisticSum += digitPowed;

        numberCopy /= 10;
    }

    printf("Reversed: %u\n", reversed);
    printf("Digits sum: %u\n", digitsSum);
    printf("Narcissistic: %d\n", number == narcissisticSum);
    printf("Palindrome: %d\n", number == reversed);

    return 0;
}
