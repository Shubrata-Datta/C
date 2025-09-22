#include<stdio.h>
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) 
{
    return (a * b) / gcd(a, b);
}
int main(){
    int a, b;
    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    if (a == 0 || b == 0) {
        printf("LCM is not defined for zero.\n");
        return 1; 
    }
    int result = lcm(a, b);
    printf("The LCM of %d and %d is: %d\n", a, b, result);
    return 0;
}
