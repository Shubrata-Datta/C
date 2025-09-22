#include <stdio.h>
int main(){
    int n=5;
    int arr[5] = {1, 2, 3, 4, 5};
    int isSorted = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            isSorted = 0;
            break;
        }
    }
    if (isSorted)
        printf("The array is sorted in ascending order.\n");
    else
        printf("The array is not sorted in ascending order.\n");
    return 0;
}
