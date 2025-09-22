#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks[5];
};

int main() {
    struct Student students[100];
    int count = 0, choice;

    while (1) {
        printf("\nMarks Management System\n");
        printf("1. Add student marks\n");
        printf("2. Display all student marks\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("\nEnter roll number: ");
            scanf("%d", &students[count].rollNumber);
            printf("Enter name: ");
            scanf(" %[^\n]", students[count].name);
            printf("Enter marks for 3 subjects:\n");
            for (int i = 0; i < 3; i++) {
                printf("Subject %d: ", i + 1);
                scanf("%f", &students[count].marks[i]);
            }
            count++;
            printf("Student added successfully.\n");
        } 
        else if (choice == 2) {
            if (count == 0) {
                printf("No students to display.\n");
                continue;
            }
            printf("\nAll Student Marks:\n");
            for (int i = 0; i < count; i++) {
                printf("Roll Number: %d\n", students[i].rollNumber);
                printf("Name: %s\n", students[i].name);
                printf("Marks: ");
                for (int j = 0; j < 3; j++) {
                    printf("%.2f ", students[i].marks[j]);
                }
                printf("\n");
            }
        } 
        else if (choice == 3) {
            printf("Exiting the program.\n");
            break;
        } 
        else {
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
