#include<stdio.h>
main()
{
	int arr[10],i,arr2[10],arr5[10],arr10[10],j=0,k=0,l=0;
	for(i=0;i<10;i++)
	{
		printf("enter array value [%d]:",i);
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			arr2[j]=arr[i];
			j++;
		}
			if(arr[i]%5==0)
		{
			arr5[k]=arr[i];
			k++;
		}
			if(arr[i]%10==0)
		{
			arr10[l]=arr[i];
			l++;
		}
		
	}
	printf("\nNormal array : ");
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nDivisible by 2 array is : ");
	for(i=0;i<j;i++)
	{
		printf("%d\t",arr2[i]);
	}
	printf("\nDivisible by 5 array is : ");
	for(i=0;i<k;i++)
	{
		printf("%d\t",arr5[i]);
	}
	printf("\nDivisible by 10 array is : ");
	for(i=0;i<l;i++)
	{
		printf("%d\t",arr10[i]);
	}
	
	
	
}
