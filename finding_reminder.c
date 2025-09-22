#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    int result=a%b;
    printf("The reminder is %d",result);

    return 0;
}