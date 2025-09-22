#include<stdio.h>
#include<string.h>
struct employee
{
   int code;
   float salary;
   char name[20];
};
int main(){
    struct employee Halamadrid={14,245.45,"Brahim"};
    printf("Name is:%s\n",Halamadrid.name);
    printf("code is:%d\n",Halamadrid.code);
    printf("salary is:%.2f\n",Halamadrid.salary);
    
    return 0;
}