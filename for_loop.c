#include<stdio.h>
int main(){
    int n;
    int i;
    printf("Enter the number n:\n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
       printf("%d\n",i+1);
    }
    
    return 0;
}