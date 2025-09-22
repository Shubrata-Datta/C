#include<stdio.h>
#include<string.h>
int main(){
    char str1[20];
    char str2[30];
    printf("Enter the value of first string\n");
    scanf("%s",str1);
    printf("Enter the value of second string\n");
    scanf("%s",str2);
    printf("The value of first string is %s\n",str1);
    printf("The value of second string is %s\n",str2);
    printf("strcmp for this string returns %d",strcmp(str1,str2));
    return 0;
}