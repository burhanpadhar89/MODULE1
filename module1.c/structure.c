#include <stdio.h>

// Define the structure to store student details
struct Student {
    char name[50];       
    int rollNumber;      
    float marks;  
};

int main() {
    struct Student students[3];

    
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Enter name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove newline character

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
        getchar();  // To consume the newline left by scanf

        printf("\n");
    }

    // Print details of all students
    printf("Student Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}
