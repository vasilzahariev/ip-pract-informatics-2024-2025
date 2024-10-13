#include <stdio.h>

int main() {
    unsigned int money = 0;

    scanf("%u", &money);

    unsigned int cash100 = money / 100;
    money -= cash100 * 100;
    printf("100 -> %u\n", cash100);

    unsigned int cash50 = money / 50;
    money -= cash50 * 50;
    printf("50 -> %u\n", cash50);

    unsigned int cash20 = money / 20;
    money -= cash20 * 20;
    printf("20 -> %u\n", cash20);

    unsigned int cash10 = money / 10;
    money -= cash10 * 10;
    printf("10 -> %u\n", cash10);

    unsigned int cash5 = money / 5;
    money -= cash5 * 5;
    printf("5 -> %u\n", cash5);

    unsigned int cash2 = money / 2;
    money -= cash2 * 2;
    printf("2 -> %u\n", cash2);

    unsigned int cash1 = money / 1;
    money -= cash5 * 1;
    printf("1 -> %u\n", cash1);

    return 0;
}
