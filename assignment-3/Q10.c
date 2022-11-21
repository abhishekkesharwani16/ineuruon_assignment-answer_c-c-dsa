#include<stdio.h>
int main()
{
    int selling_price,cost_price,profit,loss;
    printf("Enter selling_price & cost_price\n");
    scanf("%d %d",&selling_price,&cost_price);
    if(selling_price-cost_price>0)
    {
        profit=(profit/cost_price)*100;
        printf("Profit, %d perchantage\n",profit);
    }
    else
    {  
        loss=(loss/cost_price)*100;
        printf("Loss, %d ,perchantage\n",loss);
    }
    return 0;
}