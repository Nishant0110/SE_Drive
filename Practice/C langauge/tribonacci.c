/*
enter value of n number:15
0 1 2 3 6 11 20 37 68 125 230 423 778 1431 2632 
*/
#include<stdio.h>
main()
{
	int a=0,b=1,c=2,d,n,i;
	printf("enter value of n number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("%d ",a);
	d=a+b+c;
	a=b;
	b=c;
	c=d;
	}
}
