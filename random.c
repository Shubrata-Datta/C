#include<stdio.h>
void printTable(int *mulTable,int num,int n){
    int n;
    printf("Multiplicaion table of %d is:\n",num);
    printf("Enter the number n:\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        mulTable[i]=num*(i+1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%dX%d=%d\n",num,i+1,mulTable[i]);
    }
    printf("***********************************\n\n");
    
}
int main(){
    int mulTable[3][10];
    printTable(mulTable[0],2,n);
    printTable(mulTable[1],7,n);
    printTable(mulTable[2],9,n);
    
    return 0;
}