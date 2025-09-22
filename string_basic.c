#include<stdio.h>
int main(){
    char s[]="Shubrata";
    char *ptr=s;
    for (;*ptr !='\0' ; *ptr++)
    {
        printf("%c",*ptr);
    }
     
    return 0;
}