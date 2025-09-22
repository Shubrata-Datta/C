#include<stdio.h>
//Function prototype
int sum(int ,int );
//Function definition
int sum(int x ,int y){
    //printf("The sum is %d\n",x+y);
    return x+y;
}
int main(){
    int a=23;
    int b=34;
    int e=sum(a,b);//function call
    printf("%d\n",e);

    int c=33;
    int d=44;
    int f=sum(c,d);
    printf("%d\n",f);

    return 0;
}