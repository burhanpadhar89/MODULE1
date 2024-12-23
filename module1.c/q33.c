#include <stdio.h>

int main() {
    int num;

    // Ask the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate the first three powers (N^1, N^2, N^3)
    printf("The first three powers of %d are:\n", num);
    printf("%d^1 = %d\n", num, num);
    printf("%d^2 = %d\n", num, num * num);
    printf("%d^3 = %d\n", num, num * num * num);

    return 0;
}