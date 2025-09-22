#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter number a:");
    scanf("%d",&a);
    printf("Enter number b:");
    scanf("%d",&b);
    printf("Enter number c:");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        printf("The greatest number is a\n");    
    }
    else if (b>a && b>c)
    {
        printf("The greatest number is b\n");
    }
    else
    {
        printf("The greatest number is c\n");
    }

    return 0;
}