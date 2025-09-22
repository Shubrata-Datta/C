#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",a);
    if (a>99 && a<1000)
    {
        printf("The number has 3 digit.\n");
    }
    else
    {
        printf("The number is not a three digit number.\n");
    }
    return 0;
}