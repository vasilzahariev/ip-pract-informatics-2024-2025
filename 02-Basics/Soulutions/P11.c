#include <stdio.h>

int main() {
    int start = 0;
    int end = 0;
    int number = 0;

    scanf("%d %d %d", &start, &end, &number);

    printf("%hd", (start <= number && number <= end));

    return 0;
}
