#include<stdio.h>
main()
{
	int arr[10],i,even=0,even_total,odd=0,odd_total;
	printf("enter 10 values of array:\n");
	for(i=0;i<10;i++)
	{
		printf("enter array :");
		scanf("%d",&arr[i]);
	}
		printf("This is your array value:");
		for(i=0;i<10;i++)
		{
			printf("%d \n",arr[i]);
		}	
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
			even++;
			even_total+=arr[i];
			printf("even Number %d\n",arr[i]);
		}
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]%2!=0)
		{
			odd++;
			odd_total+=arr[i];
			printf("odd Number %d\n",arr[i]);
		}
	}
	printf("Total Even Number : %d\n",even);
	printf("Total odd number :%d\n",odd);
	printf("Total Even Number total : %d\n",even_total);
	printf("Total odd number total:%d\n",odd_total);
	}
