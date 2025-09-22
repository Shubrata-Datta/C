#include <stdio.h>
int main() {
    int x = 100;
    int *p = &x;
    int **q = &p; 
    printf("Value of x: %d\n", x);
    printf("Value of x using *p: %d\n", *p);
    printf("Value of x using **q: %d\n", **q); 
    return 0;
}
