#include <stdio.h>

int main() {
    float width, length, height, area;

    printf("Enter the width of the rectangular prism: ");
    scanf("%f", &width);
    printf("Enter the length of the rectangular prism: ");
    scanf("%f", &length);
    printf("Enter the height of the rectangular prism: ");
    scanf("%f", &height);

    area = 2 * (width * length + height * length + height * width);

    printf("Surface area of the rectangular prism: %.2f\n", area);

    return 0;
}