#include<stdio.h>
int main(){
    int math, physics, chemistry;
    float total;
    printf("Enter your math number:\n");
    scanf("%d", &math);
    printf("Enter your physics number:\n");
    scanf("%d", &physics);
    printf("Enter your chemistry number:\n");
    scanf("%d", &chemistry);
    total = (math + physics + chemistry) / 3.0;  

    if ((total < 40) || (math < 33) || (physics < 33) || (chemistry < 33)) {
        printf("Your total percentage is %f and you are fail!\n", total);
    } else {
        printf("Your total percentage is %f and you are pass!\n", total);
    }

    return 0;
}
