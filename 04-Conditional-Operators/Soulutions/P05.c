#include <stdio.h>

int main() {
    char symbol = 0;

    scanf("%c", &symbol);

    if (symbol >= 'a' && symbol <= 'z') {
        printf("lowercase\n");
    } else if (symbol >= 'A' && symbol <= 'Z') {
        printf("uppercase\n");
    } else if (symbol >= '0' && symbol <= '9') {
        printf("digit\n");
    } else {
        printf("other symbol\n");
    }

    return 0;
}
