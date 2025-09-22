#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (a%5==0)
    {
        printf("The number is divisible by 5.\n");
    }
    else
    {
        printf("The number is not divisible by 5.\n");
    }
    
    return 0;
}