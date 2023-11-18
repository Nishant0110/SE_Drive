#include<stdio.h>
main()
{
	int arr[10],i;
	for(i=0;i<10;i++)
	{
		printf("enter array value [%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("this is your array:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
			printf("\nThis array is divisable by 2:%d",arr[i]);
		}
		if(arr[i]%5==0)
		{
			printf("\nThis array is divisible by 5:%d",arr[i]);
		}
		if(arr[i]%10==0)
		{
			printf("\nThis array is divisable by 10:%d",arr[i]);
		}
	}
	
}
