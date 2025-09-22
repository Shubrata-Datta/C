#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1;//generates a random number beween 1-100
    //printf("The number is %d",number);
/*do
{
    printf("guess the number between 1-100:");
    scanf("%d",&guess);
   if (guess<number)
   {
       printf("Higher number please!\n");
   }
   else if (guess>number)
   {
       printf("Lower number please!\n");
   }
   else
   {
       printf("You guessed it in %d attempts\n",nguesses);
   }
   nguesses++;
   
    
} while (guess!=number);


    
    return 0;
}*/
while (guess!=number)
{
    printf("guess the number between 1-100:");
    scanf("%d",&guess);
   if (guess<number)
   {
       printf("Higher number please!\n");
   }
   else if (guess>number)
   {
       printf("Lower number please!\n");
   }
   else
   {
       printf("You guessed it in %d attempts\n",nguesses);
   }
   nguesses++;
   
}
}