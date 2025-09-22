#include<stdio.h>
int main(){
    int mul[10];
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        mul[i]=n*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d*%d=%d\n",n,i+1,mul[i]);
    }

    
    return 0;
}