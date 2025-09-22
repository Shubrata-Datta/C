#include <stdio.h>

int main() {
    int p=1,q=2,r=3,s=4;
    for (p = 1; p <= 2; p++)
    {
        for (s = 0; s <=1 ; s++)
        {
            for (q=-1; q<1; q++)
            {
              for ( r = -11; r <= 13; r=r+5)
              {
                printf("%d,%d,%d,%d\n",p,q,r,s);
              }
               
            }
            
        }
        
    }
    printf("%d,%d,%d,%d\n",p,q,r,s); 
    

    return 0;
}