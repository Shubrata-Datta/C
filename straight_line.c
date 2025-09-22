#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("Enter the value of x1:");
    scanf("%d",&x1);
    printf("Enter the value of y1:");
    scanf("%d",&y1);
    printf("Enter the value of x2:");
    scanf("%d",&x2);
    printf("Enter the value of y2:");
    scanf("%d",&y2);
    printf("Enter the value of x3:");
    scanf("%d",&x3);
    printf("Enter the value of y3:");
    scanf("%d",&y3);
    float m1=(float)(x2-x1)/(y2-y1);
    float m2=(float)(x3-x2)/(y3-y2);
    if (m1==m2)
    {
        printf("All three points fall in one straight line\n");
    }
    else
    {
        printf("All three points don't fall in one line\n");
    }
    return 0;
}