#include <stdio.h>

int main() {
    int firstVectorX = 0;
    int firstVectorY = 0;
    int secondVectorX = 0;
    int secondVectorY = 0;

    scanf("%d %d %d %d", &firstVectorX, &firstVectorY, &secondVectorX, &secondVectorY);

    int dotProduct = firstVectorX * secondVectorX + firstVectorY * secondVectorY;

    if (dotProduct == 0) {
        printf("perpendicular\n");
    } else {
        printf("not perpendicular\n");
    }

    return 0;
}
