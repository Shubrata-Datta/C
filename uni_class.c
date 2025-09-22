#include<stdio.h>
int main(){
    int a=12;
    int b=11;
    int c=20;
    int result=(a>b || b<=c && c>b);
    printf("%d\n",result);
    return 0;
}