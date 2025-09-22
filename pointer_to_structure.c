#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
};
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    //(*ptr).code=101;//it can be also written as below
    ptr->code =101;
    printf("%d",e1.code);
    
    return 0;
}