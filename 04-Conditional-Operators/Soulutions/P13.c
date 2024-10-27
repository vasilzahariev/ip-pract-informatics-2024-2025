#include <stdio.h>

int main() {
    int day = 0;
    int month = 0;

    scanf("%d %d", &day, &month);

    if (day < 1) {
        printf("Invalid date\n");

        return 1;
    }

    switch (month) {
        case 2:
            if (day > 28) {
                printf("Invalid date\n");

                return 1;
            }

            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day > 31) {
                printf("Invalid date\n");

                return 1;
            }
            
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day > 30) {
                printf("Invalid date\n");

                return 1;
            }

            break;
        default:
            printf("Invalid date\n");

            return 1;
    }

    printf("Valid date\n");

    return 0;
}
