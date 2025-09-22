#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a=100;
    for (int i = 1; i <= n; i++)
    {
        if (a<0)
        {
            break;
        }
        else
        {
           printf("%d\n",a);
           a=a-3; 
        }
        
        
    }
    
    return 0;
}