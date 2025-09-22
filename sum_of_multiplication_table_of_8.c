#include<stdio.h>
int main(){
    int n=8,i,sum=0;
    printf("Sum of multiplication table of 8.\n\n");
    for ( i = 1; i <=10; i++)
    {
       (sum+= n * i);  
    }
    printf("The sum of the numbers in the multiplication table of 8 is: %d\n", sum);
    
    return 0;
}