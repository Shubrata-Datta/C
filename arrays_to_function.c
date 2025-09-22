#include<stdio.h>
    void printarray(int *ptr,int n){
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n",i+1,*(ptr+i));
    }
}
int main(){
    int array[]={45,34,65,67,87,98,90};
    printarray(array,7);

    return 0;
}