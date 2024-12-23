#include <stdio.h>

// Function to print Pascal's Triangle up to N rows using loops
void printPascalsTriangle(int N) {
    int i, j, value;

    // Loop through each row
    for (i = 0; i < N; i++) {
        value = 1;  // First element of each row is always 1
        
        // Print leading spaces for formatting
        for (j = 0; j < N - i - 1; j++) {
            printf(" ");
        }

        // Print the values in the row
        for (j = 0; j <= i; j++) {
            printf("%d ", value);
            // Calculate the next value using the previous value
            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

int main() {
    int N;

    // Input the number of rows for Pascal's Triangle
    printf("Enter the number of rows: ");
    scanf("%d", &N);

    // Call the function to print Pascal's Triangle
    printPascalsTriangle(N);

    return 0;
}
