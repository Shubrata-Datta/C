#include<stdio.h>
int main(){
    switch (5)
    {
    case 6:
        printf("Hello:from block 6");
        break;
    case 5:
        printf("Hello:from block 5");
        break;
    case 4:
        printf("Hello:from block 4");
        break;
    default:
        printf("no case has matched");
        break;
    }
    return 0;
}