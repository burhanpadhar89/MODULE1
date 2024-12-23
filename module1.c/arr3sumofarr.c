#include <stdio.h>

int main() {
    int N;
    int sum = 0;
    float average;

    // Ask for the number of elements (N) to be input
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // Declare an array of size N
    int numbers[N];

    // Input N numbers from the user
    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i]; // Add each number to the sum
    }

    // Calculate the average
    average = (float)sum / N;

    // Display the sum and average
    printf("Sum of the numbers: %d\n", sum);
    printf("Average of the numbers: %.2f\n", average);

    return 0;
}
