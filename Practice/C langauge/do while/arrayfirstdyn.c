#include<stdio.h>
main()
{
	int i,arr[5];
	printf("enter the 5 values");
	for(i=0;i<5;i++)
	{
		printf("Enter the value [%d] :",i);
		scanf("%d",&arr[i]);
	}
	printf("\n this is your arry \n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
}
