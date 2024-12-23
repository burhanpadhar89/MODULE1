#include <stdio.h>

int main() {
    int choice;
    float years, days;

    printf("Choose the conversion:\n");
    printf("1. Convert years to days\n");
    printf("2. Convert days to years\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the number of years: ");
        scanf("%f", &years);

        days = years * 365;

        printf("%.2f years is equal to %.2f days.\n", years, days);
    } else if (choice == 2) {
        printf("Enter the number of days: ");
        scanf("%f", &days);

        years = days / 365;

        printf("%.2f days is equal to %.2f years.\n", days, years);
    } else {
        printf("Invalid choice. Please select either 1 or 2.\n");
    }

    return 0;
}