#include <stdio.h>

int main() {
    float side, circumference;

    printf("Enter the length of one side of the square: ");
    scanf("%f", &side);

    circumference = 4 * side;

    printf("Circumference of the square: %.2f\n", circumference);

    return 0;
}
