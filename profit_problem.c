#include<stdio.h>
int main(){
    int costprice,sellingprice;
    printf("Enter the cost price:");
    scanf("%d",&costprice);
    printf("Enter the selling price:");
    scanf("%d",&sellingprice);
    if (costprice>sellingprice)
    {
        int a=costprice - sellingprice;
        printf("Seller has made a loss and the loss is %d\n",a);
    }
    else if (costprice==sellingprice)
    {
        printf("No loss or Profit");
    }
    else
    {

        int b=sellingprice-costprice;
        printf("Seller has made a profit and the profit is %d\n",b);
    }

    return 0;
}