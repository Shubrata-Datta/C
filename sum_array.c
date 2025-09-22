#include <stdio.h>
int main(){
    int n, i, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) 
    {
        sum =sum + arr[i];
    }
    printf("Sum of the array elements: %d\n", sum);
    float avg=sum/n;
    printf("Average:%.2f\n",avg);
    return 0;
}