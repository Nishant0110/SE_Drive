#include<stdio.h>
void main()
{
	int a,b;
	printf("enter value of a");
	scanf("%d",&a);
	printf("enter value of b");
	scanf("%d",&b);
	if(a>b)
	{
	printf("Maximum=%d",a);
	}
	if(b>a)
	{
		printf("Maximum=%d",b);
	}
	if(a==b)
	{
		printf("Both Are Equal");
	}
}

