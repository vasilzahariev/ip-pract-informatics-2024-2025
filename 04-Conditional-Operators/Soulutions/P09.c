#include <stdio.h>

int main() {
    unsigned short number = 0;

    scanf("%hu", &number);

    if (number > 3000) {
        printf("Invalid number.\n");
    
        return 1;
    }

    unsigned short thousands = number / 1000;
    unsigned short hundreds = (number / 100) % 10;
    unsigned short tens = (number / 10) % 10;
    unsigned short ones = number % 10;

    switch (thousands) {
        case 1:
            printf("M");

            break;
        case 2:
            printf("MM");

            break;
        case 3:
            printf("MMM");

            break;
        default: break;
    }

    switch (hundreds) {
        case 1:
            printf("C");
        
            break;
        case 2:
            printf("CC");
        
            break;
        case 3:
            printf("CCC");
        
            break;
        case 4:
            printf("CD");
        
            break;
        case 5:
            printf("D");
        
            break;
        case 6:
            printf("DC");
        
            break;
        case 7:
            printf("DCC");
        
            break;
        case 8:
            printf("DCCC");

            break;
        case 9:
            printf("CM");
        
            break;
        default: break;
    }

    switch (tens) {
        case 1:
            printf("X");
        
            break;
        case 2:
            printf("XX");
        
            break;
        case 3:
            printf("XXX");
        
            break;
        case 4:
            printf("XL");
        
            break;
        case 5:
            printf("L");
        
            break;
        case 6:
            printf("LX");
        
            break;
        case 7:
            printf("LXX");
        
            break;
        case 8:
            printf("LXXX");

            break;
        case 9:
            printf("XC");
        
            break;
        default: break;
    }

    switch (ones) {
    case 1:
        printf("I");

        break;
    case 2:
        printf("II");

        break;
    case 3:
        printf("III");

        break;
    case 4:
        printf("IV");

        break;
    case 5:
        printf("V");

        break;
    case 6:
        printf("VI");

        break;
    case 7:
        printf("VII");
        
        break;
    case 8:
        printf("VIII");
        
        break;
    case 9:
        printf("IX");

        break;
    }

    printf("\n");

    return 0;
}
