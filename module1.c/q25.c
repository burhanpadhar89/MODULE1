#include <stdio.h>

int main() {
    float expenses[5];  // Array to store the 5 expenses
    float totalExpense = 0, averageExpense;
    int i;

    // Input the expenses
    for (i = 0; i < 5; i++) {
        printf("Enter expense %d: ", i + 1);
        scanf("%f", &expenses[i]);  // Accept the expense value
        totalExpense += expenses[i];  // Add expense to total
    }

    // Calculate the average expense
    averageExpense = totalExpense / 5;

    // Output the total and average expenses
    printf("\nTotal Expense: %.2f\n", totalExpense);
    printf("Average Expense: %.2f\n", averageExpense);

    return 0;
}