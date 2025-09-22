#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    /*while(n%10 == 0){
        n=n/10;
    }*/
    while (n!=0)
    {
        int a=n%10;
        printf("%d",a);
        n=n/10;
    }
    
    return 0;
}