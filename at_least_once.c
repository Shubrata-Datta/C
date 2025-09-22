#include<stdio.h>
int main(){
    int n;
    int i=0;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        if (n==0)
        {
            break;
        }
        
        printf("Hello World!\n");
        i++;

    } while (i<n);
    
    return 0;
}