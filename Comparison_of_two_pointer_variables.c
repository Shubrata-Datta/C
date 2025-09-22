#include <stdio.h>
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr1 = &arr[2];
    int *ptr2 = &arr[4];
    if (ptr1 < ptr2) {
        printf("Pointer 1 is less than Pointer 2\n");
    } else {
        printf("Pointer 1 is not less than Pointer 2\n");
    }
    return 0;
}
