#include<stdio.h>
int main(){
    int a,b;
    printf("Enter no a:");
    scanf("%d",&a);
    printf("Enter no b:");
    scanf("%d",&b);
    int temp=a;
    a=b;
    b=temp;
    printf("Now a is %d\n",a);
    printf("Now b is %d\n",b);
    return 0;
}