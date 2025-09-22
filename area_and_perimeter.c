#include<stdio.h>
int main(){
    int l,b;
    printf("Enter the value of length of the rectangle:");
    scanf("%d",&l);
    printf("Enter the value of breadth of the rectangle:");
    scanf("%d",&b); 
    int area=l*b;
    int perimeter=2*(l+b);
    if (area>perimeter)
    {
        printf("The area of rectangle is greater han its perimeter\n");
    }
    else
    {
        printf("The area of rectangle is less than its perimeter\n");
    }
    
    return 0;
}