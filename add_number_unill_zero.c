#include<stdio.h>
#include<stdbool.h>
int n=0;
int sum=0;
int main(){
    while (true)
    {
       printf("Enter a number:");
       scanf("%d",&n);
       if (n==0)
       {
        break;
       }
       
       sum=sum+n;
    }
    printf("%d",sum);
    return 0;
}