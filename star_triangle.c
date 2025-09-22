#include<stdio.h>
int main(){
    int rows;
    int col;
    printf("Enter row:");
    scanf("%d",&rows);
    printf("Enter col:");
    scanf("%d",&col);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");//number triangle ("%d",j)
        }
        printf("\n");
    }
    
    return 0;
}