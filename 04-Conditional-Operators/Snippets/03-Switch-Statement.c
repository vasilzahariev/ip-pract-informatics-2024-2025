#include <stdio.h>

int main() {
    // Switch Statement
    unsigned short dayOfTheWeek = 0;

    scanf("%hu", &dayOfTheWeek);

    // The switch statement takes both integer and character types.
    switch (dayOfTheWeek) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day of the week\n");

            return 1;
    }



    // Fall-through in switch statements
    // Switch fall-through occurs when a case does not have a break statement,
    // causing the execution to continue into the next case.

    /*
        'B' for Bronze -> 5% discount
        'S' for Silver -> 10% discount
        'G' for Gold or 'P' for Platinum -> 20% discount
    */
    char membershipType = 'P';
    int discount = 0;

    switch (membershipType) {
        case 'B':
            discount = 5;
            break;
        case 'S':
            discount = 10;
            break;
        case 'G':
        case 'P':
            discount = 20;
            break;
        default:
            printf("Invalid membership type.\n");

            return 1;
    }

    printf("You get a %d%% discount!\n", discount);

    return 0;
}
