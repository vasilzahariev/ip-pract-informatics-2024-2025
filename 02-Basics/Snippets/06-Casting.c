#include <stdio.h>

int main() {
    // Without loss
    int integer_wihtout_loss = 7;
    double real_without_loss = integer_wihtout_loss;

    // With loss
    double real_with_loss = 1.7;
    int integer_with_loss = real_with_loss;

    // Explicit casting
    double real_explicit = 5.5;
    int integer_explicit = (int)real_explicit;

    return 0;
}
