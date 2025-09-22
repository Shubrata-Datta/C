#include<stdio.h>
int main(){
    int rows;
    int col;
    printf("enter the number of rows:");
    scanf("%d",&rows);
    printf("enter the number of col:");
    scanf("%d",&col);
    for (int i = 1; i <= rows; i++)
    {
        for (int i = 1; i <=col; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}