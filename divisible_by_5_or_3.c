#include<stdio.h>
int main(){
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    if (a%5==0 || a%3==0)
    {
        printf("The number is divisible by 5 or 3\n");
    }
    /*else if (a%5==0 && a%3!=0)
    {
        printf("The number is divisible by 5\n");
    }
    else if (a%5!=0 && a%3==0)
    {
        printf("The number is divisible by 3\n");
    }*/
    else
    {
        printf("The number is not divisible by 5 or 3\n");
    }
    
    return 0;
}