#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character:\n");
    scanf("%c",&ch);
    if (ch>=97 && ch<=122)
    {
        printf("%c is lowercase",ch);
    }
    else
    {
      printf("%c is not lowercase",ch);
    }
    //97-122=a-z ascii code values
    return 0;
}