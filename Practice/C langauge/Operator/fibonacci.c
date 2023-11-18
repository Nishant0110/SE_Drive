// 0 1 1 2 3 5 8 13 21 34     n=10

#include<stdio.h>
main()
{
	int a=0,b=1,n,c,i;
	printf("enter any value ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
	
}
