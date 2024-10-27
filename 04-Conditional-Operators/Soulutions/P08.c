#include <stdio.h>

int main() {
    const double k_mayOctoberStudioPrice = 50;
    const double k_mayOctoberApartmentPrice = 65;

    const double k_juneSeptemberStudioPrice = 75.2;
    const double k_juneSeptemberAbove14DaysDiscountMultiplier = 0.8;
    const double k_juneSeptemberApartmentPrice = 68.7;

    const double k_julyAugustStudioPrice = 76;
    const double k_julyAugustApartmentPrice = 77;

    unsigned short vacationStartMonth;
    unsigned short vacationDays;

    scanf("%hu %hu", &vacationStartMonth, &vacationDays);

    if (vacationDays > 200) {
        printf("Too many vacation days.\n");

        return 1;
    }

    double dailyStudioPrice = 0;
    double dailyApartmentPrice = 0;
    double aprtmentDiscountMultiplier = vacationDays > 14 ? 0.9 : 1;
    double studioDiscountMultiplier = 1;

    switch (vacationStartMonth) {
        case 5:
        case 10:
            dailyStudioPrice = k_mayOctoberStudioPrice;
            dailyApartmentPrice = k_mayOctoberApartmentPrice;
            
            studioDiscountMultiplier = (vacationDays > 14 ? 0.7 : (vacationDays > 7 ? 0.95 : 1));

            break;
        case 6:
        case 9:    
            dailyStudioPrice = k_juneSeptemberStudioPrice;
            dailyApartmentPrice = k_juneSeptemberApartmentPrice;

            studioDiscountMultiplier = vacationDays > 14 ? 0.8 : 1;

            break;
        case 7:
        case 8:
            dailyStudioPrice = k_julyAugustStudioPrice;
            dailyApartmentPrice = k_julyAugustApartmentPrice;

            break;
        default:
            printf("Hotel doesn't work during this month.\n");

            return 1;
    }

    dailyStudioPrice *= studioDiscountMultiplier;
    dailyApartmentPrice *= aprtmentDiscountMultiplier;

    double finalSutdioPrice = dailyStudioPrice * vacationDays;
    double finalApartmentPrice = dailyApartmentPrice * vacationDays;

    printf("Apartment: %.2f lv.\n", finalApartmentPrice);
    printf("Studio: %.2f lv.\n", finalSutdioPrice);

    return 0;
}
