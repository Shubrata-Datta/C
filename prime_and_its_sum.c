#include <stdio.h>
int main() {
    int num,i,j,prime,sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 2; i <= num; i++)
    {
      prime=1;
      for (j = 2; j <= i/2 ; j++)
        {
          if (i % j == 0)
          {
            prime = 0;
            break;
          }
        }
        if (prime==1)
        {
          printf("%d is a prime number\n", i);
          sum =sum + i;
        }
    }
    printf("Sum of prime numbers up to %d is: %d\n", num, sum);

    return 0;
}