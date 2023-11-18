#include<stdio.h>
main()
{
	int buy,sell,amount;
	printf("Enter buying price:");
	scanf("%d",&buy);
	printf("Enter selling price:");
	scanf("%d",&sell);
	if(sell>buy)
	{
		amount=sell-buy;
		printf("Profit=%d",amount);
	}
	else if(buy>sell)
	{
		amount=buy-sell;
		printf("Loss=%d",amount);
	}
	else
	{
		printf("No profit no loss=%d",amount);
	}
}
