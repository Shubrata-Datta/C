#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int lastdigit;
    while (n!=0)
    {
        lastdigit=n%10;
        if (lastdigit%2==0)
        {
            sum=sum+lastdigit;
        }
        n=n/10;

    }
    printf("The sum of all even number is %d",sum);
    
    return 0;
}