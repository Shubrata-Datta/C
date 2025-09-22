#include<stdio.h>
int main(){
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    if (x == 0 && y == 0) {
        printf("The point lies on the origin\n");
    } 
    else if (x == 0) {
        printf("The point lies on the y-axis\n");
    } 
    else if (y == 0) {
        printf("The point lies on the x-axis\n");
    } 
    else {
        printf("The point does not lie on the x-axis, y-axis, or origin\n");
    }

    return 0;
}
