#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("divisibility test returns %d\n", num%97);
    //if returns 0 then it is divisible

    return 0;
}