#include<stdio.h>
#include<string.h>
int main(){
    char st1[25]="Hel";
    char *st2="Helo";
    int val =strcmp(st1,st2);
    printf("Now the value is %d",val);
    return 0;
}
//0 if they are equal,
//A negative value if st1 is less than st2,
//A positive value if st1 is greater than st2.