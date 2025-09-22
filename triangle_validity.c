#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first angle:");
    scanf("%d",&a);
    printf("Enter first angle:");
    scanf("%d",&b);
    printf("Enter first angle:");
    scanf("%d",&c);
    int sum=a+b+c;
    if (sum==180)
    {
        printf("The triangle is valid\n");
    }
    else
    {
        printf("The triangle is not valid\n");
    }   
    return 0;
}