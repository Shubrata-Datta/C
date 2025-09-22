#include <stdio.h>
void multiplybyten(int *num) {
    *num *= 10; 
}
int main()
{
    int a=5;
    printf("The value of a is:%d\n",a);

    multiplybyten(&a); 
    printf("New value after multiplying by 10 is:%d\n",a);

    return 0;
}
