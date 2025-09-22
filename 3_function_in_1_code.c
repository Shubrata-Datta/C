#include <stdio.h>
int test(int x,int y){
    if(x>0 && y>0){
        return 1;
    }
    else{
        return 0;
    }
}
int add(int a,int b){
    int flag = test(a,b);
    if(flag==1){
        int c=a+b;
        return c;
    }
    else{
        return 0;
    }
}
int main() {
    int result;
    result = add(10,-11);
    if(result==0){
        printf("Negative Number is not allowed at this moment");
    }
    else{
       printf("%d",result);
    }

    return 0;
}