#include <stdio.h>
void multiplyByTen(int x) {
    x = x * 10;
}

int main() {
    int a = 5;
    printf("Before function call: %d\n", a);

    multiplyByTen(a);
    printf("After function call: %d\n", a); // Value of 'a' remains unchanged
    
    return 0;
}
