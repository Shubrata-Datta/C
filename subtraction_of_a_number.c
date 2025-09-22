#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = &arr[3];
    ptr = ptr - 2; 
    printf("Value after subtracting 2 from pointer: %d\n", *ptr);
    return 0;
}
