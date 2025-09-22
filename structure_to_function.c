#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};
void show (struct employee emp){
    printf("The code of employee is:%d\n",emp.code);
    printf("The salary of employee is:%d\n",emp.salary);
    printf("The name of employee is:%d\n",emp.name);
}

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    //(*ptr).code=101;//it can be also written as below
    ptr->code =101;
    printf("%d",e1.code);
    
    return 0;
}