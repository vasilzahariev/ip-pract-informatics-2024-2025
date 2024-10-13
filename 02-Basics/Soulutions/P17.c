#include <stdio.h>

int main() {
    const unsigned int k_songLength = 3;
    const unsigned int k_minutesInHour = 60;

    unsigned int numberOfSongs = 0;

    scanf("%u", &numberOfSongs);

    unsigned int startingHour;
    unsigned int startingMinutes;

    scanf("%u:%u", &startingHour, &startingMinutes);

    unsigned int performanceDurationInMinutes = numberOfSongs * k_songLength;

    unsigned int endingHour = startingHour + (performanceDurationInMinutes / 60);
    unsigned int edningMinutes = startingMinutes + (performanceDurationInMinutes % 60);

    printf("%02u:%02u", endingHour, edningMinutes);

    return 0;
}
