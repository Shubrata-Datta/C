#include<stdio.h>
int main(){
    int n;
    int i;
    printf("Enter the number n:\n");
    scanf("%d",&n);
    for ( i = n; i; i--)
    {
       printf("the number is %d\n",i);
    }
    
    return 0;
}