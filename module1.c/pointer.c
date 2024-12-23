#include <stdio.h>

int main() {
    int num = 10;     // Declare an integer variable
    int *ptr;         // Declare a pointer to integer
    
    // Initialize pointer to point to the address of 'num'
    ptr = &num;

    printf("Before modifying: num = %d\n", num);
    
    // Modify the value of 'num' using the pointer
    *ptr = 20;        // Dereferencing the pointer to change the value of 'num'

    printf("After modifying: num = %d\n", num);  // Print the modified value of 'num'

    return 0;
}
