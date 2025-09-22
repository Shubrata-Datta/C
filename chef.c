/*#include <stdio.h>
int main(){
    int N, digit, product = 1;
    printf("Enter the number: ");
    scanf("%d", &N);

    while (N > 0)
    {
        digit = N % 10;
        if (digit != 0) 
        {
            product=product*digit;
        }
        N /= 10;
    }

    printf("The product of all non-zero digits is: %d\n", product);
    return 0;
}*/
/*#include <stdio.h>
int main(){
    int N,sum=0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            sum=sum + i;
        }
    }
    printf("%d\n", sum); 
    return 0;
}*/
/*#include <stdio.h>
struct Student{
    char name[50];
    int rollNumber;
    int mathMarks;
    int scienceMarks;
    int englishMarks;
    int totalMarks;
};
int main(){
    int N;
    scanf("%d", &N);
    struct Student students[N];
    for (int i = 0; i < N; i++) 
    {
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks in Math: ");
        scanf("%d", &students[i].mathMarks);
        printf("Marks in Science: ");
        scanf("%d", &students[i].scienceMarks);
        printf("Marks in English: ");
        scanf("%d", &students[i].englishMarks);
        students[i].totalMarks = students[i].mathMarks + students[i].scienceMarks + students[i].englishMarks;
    }
    for (int i = 0; i < N; i++)
    {
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Math Marks: %d\n", students[i].mathMarks);
        printf("Science Marks: %d\n", students[i].scienceMarks);
        printf("English Marks: %d\n", students[i].englishMarks);
        printf("Total Marks: %d\n\n", students[i].totalMarks);
    }
    return 0;
}*/
/*#include <stdio.h>
#include <stdbool.h>
bool Unique(int year){
    int digit1 = year / 1000;
    int digit2 = (year % 1000) / 100;
    int digit3 = (year % 100) / 10;
    int digit4 = year % 10;
    if (digit1 != digit2 && digit1 != digit3 && digit1 != digit4 &&
        digit2 != digit3 && digit2 != digit4 &&
        digit3 != digit4) 
    {
        return true;
    } else 
    {
        return false;
    }
}
int main() {
    int year;
    scanf("%d", &year);

    if (Unique(year)) 
    {
        printf("YES\n");
    } 
    else
    {
        printf("NO\n");
    }
    
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int T,G,B;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &G, &B);
        printf("%d",B-G);
    }
    
    return 0;
}*/
/*#include<stdio.h>
int main(){
    int T,X;
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d",X);
        if (X>98)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }
    
    return 0;
}*/
#include <stdio.h>
int main(){
    int T,N;
    scanf("%d",&T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d",&N);
        int res=(N*(N+1))/2;

        printf("%d\n",res);

    }
    return 0;
}

