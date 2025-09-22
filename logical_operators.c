#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if (age<=70 && age>=18)
    {
        printf("you can drive");
    }
    else
    {
        printf("you can't drive");
    }
    
    return 0;
}