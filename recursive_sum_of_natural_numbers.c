#include <stdio.h>
int sumofnaturalnumbers(int n); 
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Sum of the first %d natural numbers is: %d\n", n, sumofnaturalnumbers(n));
    return 0;
}
int sumofnaturalnumbers(int n){
    if (n == 1) 
    {
        return 1;
    } 
    else 
    {
        return n + sumofnaturalnumbers(n - 1);
    }
}