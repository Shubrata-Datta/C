#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int rollNo;
    char department[50];
    float marks;
};
void addStudent(struct Student *students, int *n) {
    printf("\nEnter student details:\n");
    printf("Name: ");
    scanf("%s", students[*n].name);
    printf("Roll No: ");
    scanf("%d", &students[*n].rollNo);
    printf("Department: ");
    scanf("%s", students[*n].department);
    printf("Marks: ");
    scanf("%f", &students[*n].marks);
    (*n)++; 
}

void displayStudents(struct Student *students, int n) {
    printf("\nStudent Records:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Department: %s\n", students[i].department);
        printf("Marks: %.2f\n", students[i].marks);
    }
}
void searchStudent(struct Student *students, int n, int rollNo) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].rollNo == rollNo) {
            printf("\nStudent Found:\n");
            printf("Name: %s\n", students[i].name);
            printf("Roll No: %d\n", students[i].rollNo);
            printf("Department: %s\n", students[i].department);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nStudent with roll number %d not found.\n", rollNo);
    }
}
void updateStudent(struct Student *students, int n, int rollNo) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].rollNo == rollNo) {
            printf("\nEnter new student details:\n");
            printf("Name: ");
            scanf("%s", students[i].name);
            printf("Department: ");
            scanf("%s", students[i].department);
            printf("Marks: ");
            scanf("%f", &students[i].marks);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nStudent with roll number %d not found.\n", rollNo);
    }
}
void deleteStudent(struct Student *students, int *n, int rollNo) {
    int found = 0;
    for (int i = 0; i < *n; i++) {
        if (students[i].rollNo == rollNo) {
            for (int j = i; j < *n - 1; j++) {
                students[j] = students[j + 1];
            }
            (*n)--;
            printf("\nStudent with roll number %d deleted.\n", rollNo);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nStudent with roll number %d not found.\n", rollNo);
    }
}

int main() {
    struct Student students[100];
    int n = 0;
    int choice, rollNo;

    do {
        printf("\nStudent Management System\n");
        printf("Menu Options:\n");
        printf("1. Add a student record\n");
        printf("2. Display all student records\n");
        printf("3. Search student by roll number\n");
        printf("4. Update student details\n");
        printf("5. Delete student record\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &n);
                break;
            case 2:
                displayStudents(students, n);
                break;
            case 3:
                printf("Enter roll number to search: ");
                scanf("%d", &rollNo);
                searchStudent(students, n, rollNo);
                break;
            case 4:
                printf("Enter roll number to update: ");
                scanf("%d", &rollNo);
                updateStudent(students, n, rollNo);
                break;
            case 5:
                printf("Enter roll number to delete: ");
                scanf("%d", &rollNo);
                deleteStudent(students, &n, rollNo);
                break;
            case 6:
                printf("\nExiting...\n");
                break;
            default:
                printf("\nInvalid choice!\n");
        }
    } while (choice != 6);

    return 0;
}