#include <stdio.h>
#include <math.h>

int main() {
    // Getting the absolute value of a number
    int negativeNumber = -54;
    printf("|%d| = %d\n", negativeNumber, (int)fabs(negativeNumber));



    // Raising a number to a specific power
    int firstNumber = 10;
    printf("%d ^ 3 = %lf\n", firstNumber, pow(firstNumber, 3));



    // Getting the square root of a number
    int secondNumber = 25;
    printf("V%d = %lf", secondNumber, sqrt(secondNumber));



    double firstRealNumber = 15.46;

    // The floor rounding returns the largest integer value less than or equal to a given number
    printf("Floor rounding of %lf -> %lf\n", firstRealNumber, floor(firstRealNumber));

    // The ceil rounding returns the smallest integer value greater than or equal to a given number
    printf("Ceil rounding of %lf -> %lf\n", firstRealNumber, ceil(firstRealNumber));

    // The round function returns the nearest integer value  to a given number
    printf("Normal rounding of %lf -> %lf\n", firstRealNumber, round(firstRealNumber));

    
    
    // Using logarithms to get the number of digits of a number
    int bigNumber = 12345;
    printf("Number \"%d\" has %d digits.\n", bigNumber, ((int)floor(log10(bigNumber)) + 1));



    // Comparing double values
    const double epsilon = 0.00001;
    double secondRealNumber = 4.5443;
    int areTheyEqual = fabs(firstRealNumber - secondRealNumber) < epsilon; // They are close enough.
    printf("Are %lf and %lf equal? %d\n", firstRealNumber, secondRealNumber, areTheyEqual);

    return 0;
}
