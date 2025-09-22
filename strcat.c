#include<stdio.h>
#include<string.h>
int main(){
    char st1[45]="Cristiano";
    char *st2="Ronaldo";
    strcat(st1,st2);
    printf("Now the st1 is %s",st1);
    return 0;
}