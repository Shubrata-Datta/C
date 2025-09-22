#include<stdio.h>
int main(){
    int n;
    int count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while (n!=0)
    {
        n=n/10;
        count++;
    }
    printf("Here is %d number",count);
    
    return 0;
}