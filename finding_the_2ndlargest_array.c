#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5] = {1,5,6,2,7};
    int max = arr[0];
    int secondMAX = arr[0]; 
    for(int i=0; i<5; i++){
        if(arr[i] > max) 
        {
        max = arr[i];
        }
    }
    printf("\nMax value:%d",max);
    for(int i = 0; i<5; i++){
        if( arr[i] < max && arr[i] > secondMAX)
        {
            secondMAX = arr[i];
        }
    }
    printf("\nsecndMax value:%d",secondMAX);
}