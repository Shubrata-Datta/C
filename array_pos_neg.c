#include <stdio.h>
int main() {
    int n,positive= 0, negative= 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
        {
            positive++;
        } else if (arr[i] < 0)
        {
            negative++;
        }
    }
    printf("Positive = %d, Negative = %d\n", positive, negative);
    return 0;
}