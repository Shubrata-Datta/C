#include<stdio.h>
int main(){
    int a=2;
    int *ptr;
    ptr=&a;
    printf("The value of a is %d\n",*ptr);
    printf("The address of a is %u\n",ptr);

    return 0;
}