#include<stdio.h>
int main(){
    int rows,col;
    printf("Enter row no:");
    scanf("%d",&rows);
    printf("Enter col no:");
    scanf("%d",&col);
    for (int i = 1; i <= rows; i++)
    {
        int a=1;
        for (int j = 1; j <= i ; j++)
        {
            printf("%d",a);
            a=a+2;
        }
        printf("\n");
    }
    
    return 0;
}