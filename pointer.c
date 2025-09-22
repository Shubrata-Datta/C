// #include <stdio.h>
// int main() {
//     int num = 25;
//     int *ptr;
//     ptr = &num;
//     printf("%d\n", num);
//     printf("%d\n", *ptr);
//     printf("%p\n", &num);
//     printf("%p\n", ptr);
//     printf("%p\n", &ptr);
//     return 0;
// }
// If the address of value = 0x0045EE20 and the address of pointer q = 0x0045EE24
// #include <stdio.h>
// int main() {
//     int value = 12;
//     int *q;
//     q = &value;
//     *q = *q + 8;
//     printf("Value of value: %d\n", value);
//     printf("Value at *q: %d\n", *q);
//     printf("Address of value: %p\n", &value);
//     printf("Address stored in q: %p\n", q);
//     return 0;
// }
// Assume the memory locations are allocated as follows: data = 0x0023CC40 and p = 0x0023CC4

// #include <stdio.h>
// int main() {
//     int data = 18;
//     int *p;
//     p = &data;
//     printf("Address of data: %p\n", &data);
//     printf("Address stored in p: %p\n", p);
//     printf("Value of data: %d\n", data);
//     printf("Value accessed using p: %d\n", *p);
//     return 0;
// }

// Consider the following memory allocations: x = 5 and the address of x = 0x0025DD30. Predict the output:

#include <stdio.h>
int main() {
    int alpha = 5, beta = 15;
    int *r1, *r2;
    r1 = &alpha;
    r2 = &beta;
    printf("Address of alpha: %p, Address of beta: %p\n", &alpha, &beta);
    printf("Value of *r1: %d, Value of *r2: %d\n", *r1, *r2);
    printf("Address stored in r1: %p, r2: %p\n", r1, r2);
    return 0;
}
