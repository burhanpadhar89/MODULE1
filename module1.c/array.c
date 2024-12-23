//one dimention array

#include <stdio.h>

int main() {
    int arr[5]; 
    printf("Enter 5 integers:\n");

    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("The integers are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>

int main() {
    int matrix[3][3];  // Declare a 3x3 matrix
    int sum = 0;

    printf("Enter the elements of a 3x3 matrix:\n");

    // Input the 9 elements of the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the 3x3 matrix
    printf("\nThe 3x3 matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate the sum of all elements in the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }
    }

    printf("\nSum of all elements in the matrix: %d\n", sum);

    return 0;
}

