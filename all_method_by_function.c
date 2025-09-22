#include<stdio.h>
int add(int x ,int y){
    return x+y;
}
int sub(int x, int y){
    return x-y;
}
int mul(int x, int y){
    return x*y;
}
float div(float x, float y){
    return x/y;
}
int main(){
    int x,y; 
    printf("Enter a number x:\n");
    scanf("%d",&x);

    printf("Enter a number y:\n");
    scanf("%d",&y);
    
    int z=add(x,y);
    printf("%d\n",z);

    int z1=sub(x,y);
    printf("%d\n",z1);

    int z2=mul(x,y);
    printf("%d\n",z2);

    float z3=div(x,y);
    printf("%f\n",z3);
    return 0;
}