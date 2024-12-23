#include <stdio.h>

int main() {
    int num, i;

    // Input the number for which the multiplication table is required
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);

    // Print multiplication table using for loop
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
