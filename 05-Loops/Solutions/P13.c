#include <stdio.h>

int main() {
    unsigned recSide = 0;

    scanf("%u", &recSide);

    for (unsigned row = 0; row < recSide; ++row) {
        for (unsigned col = 0; col < recSide; ++col) {
            char isBorder = row == 0 || row == recSide - 1 || col == 0 || col == recSide - 1;
            
            printf(isBorder ? "#" : " ");
        }

        printf("\n");
    }

    return 0;
}