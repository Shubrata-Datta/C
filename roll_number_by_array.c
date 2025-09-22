#include <stdio.h>
int main(){
    int n, i;
    printf("Enter the number of rolls: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter the marks of the students:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }
    printf("Roll numbers of students with marks less than 35:\n");
    for (i = 0; i < n; i++)
    {
        if (marks[i] < 35)
        {
            printf("Roll Number: %d\n", i + 1);
        }
    }
    return 0;
}
