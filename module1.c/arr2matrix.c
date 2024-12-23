#include <stdio.h>

void addMatrices(int mat1[3][3], int mat2[3][3], int result[3][3], int size) {
    // Adding the matrices
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void multiplyMatrices(int mat1[3][3], int mat2[3][3], int result[3][3], int size) {
    // Initializing result matrix to 0
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            result[i][j] = 0;
        }
    }

    // Multiplying the matrices
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int mat[3][3], int size) {
    // Displaying the matrix
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[3][3], mat2[3][3], result[3][3];
    int size;

    // Taking input for the size of the matrices (2 or 3)
    printf("Enter the size of the matrices (2 or 3): ");
    scanf("%d", &size);

    // Check for valid size (only 2x2 or 3x3 allowed)
    if (size != 2 && size != 3) {
        printf("Invalid size! Only 2x2 or 3x3 matrices are supported.\n");
        return 1;
    }

    // Input for first matrix
    printf("Enter elements for the first matrix (%dx%d):\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input for second matrix
    printf("Enter elements for the second matrix (%dx%d):\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Add matrices and display the result
    addMatrices(mat1, mat2, result, size);
    printf("\nResultant matrix after addition:\n");
    displayMatrix(result, size);

    multiplyMatrices(mat1, mat2, result, size);
    printf("\nResultant matrix after multiplication:\n");
    displayMatrix(result, size);

    return 0;
}
