#include<stdio.h>
int main(){
    float celcius;
    printf("Enter the value of temperature in celcius=");
    scanf("%f",&celcius);
    float equation=(celcius * 9/5) + 32;
    printf("Ferhenheit %f",equation);
    return 0;
}