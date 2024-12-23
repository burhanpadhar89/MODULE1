#include <stdio.h>

int main() {
    int minutes;
    int hours, remainingMinutes, seconds;

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    seconds = minutes * 60;

    hours = minutes / 60;               // Number of hours
    remainingMinutes = minutes % 60;    // Remaining minutes after converting to hours

    printf("%d minutes is equivalent to:\n", minutes);
    printf("%d hours\n", hours);
    printf("%d minutes\n", remainingMinutes);
    printf("%d seconds\n", seconds);

    return 0;
}