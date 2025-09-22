#include <stdio.h>
#include <string.h>

// Define a structure to store student details
struct Student {
    int rollNumber;
    char name[50];
    float marks[5]; // Assume 5 subjects
    float totalMarks;
};

// Function prototypes
void addStudent(struct Student students[], int *count);
void displayStudents(struct Student students[], int count);
void searchStudent(struct Student students[], int count);
void calculateClassAverage(struct Student students[], int count);
void displayTopper(struct Student students[], int count);

int main() {
    struct Student students[100]; // Array to store up to 100 students
    int count = 0;
    int choice;

    while (1) {
        printf("\nMarks Management System\n");
        printf("1. Add student marks\n");
        printf("2. Display all student marks\n");
        printf("3. Search for a student by roll number\n");
        printf("4. Calculate class average marks\n");
        printf("5. Display the topper\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                searchStudent(students, count);
                break;
            case 4:
                calculateClassAverage(students, count);
                break;
            case 5:
                displayTopper(students, count);
                break;
            case 6:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

void addStudent(struct Student students[], int *count) {
    struct Student newStudent;
    printf("Enter roll number: ");
    scanf("%d", &newStudent.rollNumber);
    printf("Enter name: ");
    scanf(" %[^]", newStudent.name);

    newStudent.totalMarks = 0;
    printf("Enter marks for 5 subjects: \n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &newStudent.marks[i]);
        newStudent.totalMarks += newStudent.marks[i];
    }

    students[*count] = newStudent;
    (*count)++;
    printf("Student added successfully.\n");
}

void displayStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("No students to display.\n");
        return;
    }

    printf("\nAll Student Marks:\n");
    for (int i = 0; i < count; i++) {
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: ");
        for (int j = 0; j < 5; j++) {
            printf("%.2f ", students[i].marks[j]);
        }
        printf("\nTotal Marks: %.2f\n\n", students[i].totalMarks);
    }
}

void searchStudent(struct Student students[], int count) {
    if (count == 0) {
        printf("No students available to search.\n");
        return;
    }

    int rollNumber;
    printf("Enter roll number to search: ");
    scanf("%d", &rollNumber);

    for (int i = 0; i < count; i++) {
        if (students[i].rollNumber == rollNumber) {
            printf("\nStudent Found:\n");
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Marks: ");
            for (int j = 0; j < 5; j++) {
                printf("%.2f ", students[i].marks[j]);
            }
            printf("\nTotal Marks: %.2f\n\n", students[i].totalMarks);
            return;
        }
    }
    printf("Student with roll number %d not found.\n", rollNumber);
}

void calculateClassAverage(struct Student students[], int count) {
    if (count == 0) {
        printf("No students available to calculate average.\n");
        return;
    }

    float subjectTotals[5] = {0};
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < 5; j++) {
            subjectTotals[j] += students[i].marks[j];
        }
    }

    printf("\nClass Average Marks:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: %.2f\n", i + 1, subjectTotals[i] / count);
    }
}

void displayTopper(struct Student students[], int count) {
    if (count == 0) {
        printf("No students available to find topper.\n");
        return;
    }

    int topperIndex = 0;
    for (int i = 1; i < count; i++) {
        if (students[i].totalMarks > students[topperIndex].totalMarks) {
            topperIndex = i;
        }
    }

    printf("\nTopper:\n");
    printf("Roll Number: %d\n", students[topperIndex].rollNumber);
    printf("Name: %s\n", students[topperIndex].name);
    printf("Total Marks: %.2f\n", students[topperIndex].totalMarks);
}
