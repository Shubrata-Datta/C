#include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = n - 1; i >= 0; i--) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }
// 
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int extra_chocolates = 0;
//     int total_chocolates = n;      
//     while (total_chocolates%7!=0)
//     {
//         extra_chocolates++;//2
//         total_chocolates++;//35
//     }
//     int total_students = total_chocolates/7;
//     printf("%d\n", extra_chocolates);
//     printf("%d\n", total_students);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n,add=0;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]>0) 
//         add++;
//     }
//     printf("%d",add);
// return 0;
// }
int main() {

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}   
