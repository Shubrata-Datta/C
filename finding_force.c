#include<stdio.h>
float force(float mass);
int main(){
    float mass;
    printf("Enter the mass in kgs:\n");
    scanf("%f",&mass);
    printf("The value of force in Newton is %.2f\n",force(mass)); 
    return 0;
}
float force(float mass){
    float result;
    result=mass*9.8;
    return result;
}