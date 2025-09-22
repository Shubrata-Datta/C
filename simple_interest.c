#include <stdio.h>

int main() {
    int principal, rate, year;
    float simpleinterest;
    printf("Enter principal:\n");
    scanf("%d", &principal);
    printf("Enter interest rate:\n");
    scanf("%d", &rate);
    printf("Enter year:\n");
    scanf("%d", &year);
    simpleinterest = (principal * rate * year) / 100.0;
    printf("Your interest is %f\n", simpleinterest);

    return 0;
}
