#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
} 
int main(){
    int a,b;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("Now 1st number is %d\n",a);
    printf("Now 2nd number is %d\n",b);
    return 0;
}