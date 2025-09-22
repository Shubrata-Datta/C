#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr =&arr[0];
    ptr = ptr + 1; 
    printf("Value after adding 1 to pointer: %d\n", *ptr);
    return 0;
}
