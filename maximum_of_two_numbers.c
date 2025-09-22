#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter a number:");
    scanf("%d",&b);
    if (a>b)
    {
        printf("The maximum number is %d\n",a);
    }
    else
    {
        printf("The maximum number is %d\n",b);
    }
    
    return 0;
}