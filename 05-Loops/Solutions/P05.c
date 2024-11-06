#include <stdio.h>
#include <math.h>

int main() {
    const double k_epsilon = 0.000001;

    unsigned numbersToReadCount = 0;

    scanf("%u", &numbersToReadCount);

    double min = 0.0;
    double max = 0.0;
    double average = 0.0;

    for (unsigned i = 0; i < numbersToReadCount; ++i) {
        double number = 0;

        scanf("%lf", &number);

        average += number;

        if (i == 0 || number < min) {
            min = number;
        }

        if (i == 0 || number > max) {
            max = number;
        }
    }

    average /= numbersToReadCount;

    printf("Min = %.2lf\n", min);
    printf("Max = %.2lf\n", max);
    printf("Average = %.2lf\n", average);

    return 0;
}
