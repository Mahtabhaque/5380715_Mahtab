#include <stdio.h>
#include <string.h>

void timeConversion(char *time12, char *time24) {
    int hour, minute, second;
    char period[3];

    sscanf(time12, "%2d:%2d:%2d%2s", &hour, &minute, &second, period);

    if (strcmp(period, "AM") == 0) {
        if (hour == 12) hour = 0;
    } else {
        if (hour != 12) hour += 12;
    }

    sprintf(time24, "%02d:%02d:%02d", hour, minute, second);
}

int main() {
    char time12[11];
    char time24[9];

    scanf("%s", time12);
    timeConversion(time12, time24);
    printf("%s\n", time24);

    return 0;
}
