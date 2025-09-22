#include <stdio.h>

int countPositive(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, -2, 3, 4, -5, 6, -7, 8, 9, -10};
    int n =sizeof(arr) / sizeof(arr[0]);//n=10
    int positiveCount = countPositive(arr,n);
    printf("The number of positive integers in the array is: %d\n", positiveCount);
    return 0;
}
