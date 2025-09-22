#include<stdio.h>
#include<string.h>
struct employee
{
   int code;
   float salary;
   char name[20];
};

int main(){
    struct employee Halamadrid[100];
    Halamadrid[0].code=001;
    Halamadrid[0].salary=100.45;
    strcpy(Halamadrid[0].name,"sds");

    Halamadrid[1].code=002;
    Halamadrid[1].salary=200.45;
    strcpy(Halamadrid[1].name,"pakhi");
    printf("Done!!!");

    return 0;
}