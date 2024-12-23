#include <stdio.h>

int main() {
    float kilometers, meters;

    printf("Enter the distance in kilometers: ");
    scanf("%f", &kilometers);

    meters = kilometers * 1000;

    printf("%.2f kilometers is equal to %.2f meters.\n", kilometers, meters);

    return 0;
}