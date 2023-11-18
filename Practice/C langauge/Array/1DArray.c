#include<stdio.h>
main()
{
	int i,arr[5];
	for(i=0;i<5;i++)
	{
		printf("enter array value[%d]:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("This is your array:%d\n",arr[i]);
	}
}
