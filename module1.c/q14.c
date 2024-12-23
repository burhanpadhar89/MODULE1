#include <stdio.h>

int main() {
    int num;

    printf("Enter a number (digit): ");
    scanf("%d", &num);

    printf("The ASCII value of the digit '%d' is: %d\n", num, (char)num);

    return 0;
}