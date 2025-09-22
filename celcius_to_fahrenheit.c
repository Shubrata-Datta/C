#include <stdio.h>
float celsiusTofahrenheit(float celsius); //function declaration
int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    printf("The temperature in fahrenheit is %f:\n",celsiusTofahrenheit(celsius));
    return 0;
}
float celsiusTofahrenheit(float celsius){ //function definition
    float result;
    result=(celsius * 9 / 5) + 32;
    return result;
}