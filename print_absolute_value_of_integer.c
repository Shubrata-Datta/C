#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (a<0)
    {
        a=a*(-1);
        printf("The absolute value is %d\n",a);
    }
    else
    {
        printf("The absolute value is %d\n",a);
    }
    
    
    return 0;
}