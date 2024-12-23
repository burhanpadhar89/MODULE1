#include <stdio.h>

int main() {
    // Part 1: Using break to stop at 5
    printf("Using break statement to stop at 5:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // Exit the loop when i reaches 5
        }
        printf("%d ", i);
    }
    printf("\n");

    // Part 2: Using continue to skip 3
    printf("Using continue statement to skip 3:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 3) {
            continue;  // Skip printing 3 and continue with the next iteration
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}