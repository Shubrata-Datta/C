#include <stdio.h>
int main() {
    int units;
    float bill= 0;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units <= 100) 
    {
        bill= units * 1.50;
    } 
    else if (units <= 200) {
        bill = (100 * 1.50) + ((units - 100) * 2.00);
    } else
    {
        bill = (100 * 1.50) + (100 * 2.00) + ((units - 200) * 3.00);
    }

    printf("The total electricity bill is: %.2f\n", bill);

    return 0;
}
