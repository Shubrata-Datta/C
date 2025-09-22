#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < n; i += 2)
    {
        sum =sum + arr[i];
    }
    printf("Sum of odd elements = %d\n",sum);
    return 0;
}