#include <stdio.h>

int main() {
    float edge, surfaceArea;

    printf("Enter the length of one edge of the cube: ");
    scanf("%f", &edge);

    surfaceArea = 6 * edge * edge;

    printf("Surface area of the cube: %.2f\n", surfaceArea);

    return 0;
}