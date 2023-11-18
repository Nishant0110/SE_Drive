#include<stdio.h>
int sum(int x,int y);
void main()
{
	int a,b,c;
	printf("Enter the value a& b:");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("sum is %d",c);
}
int sum(int x,int y)
{	
	int z;
	//scanf("%d%d",&x,&y);
	z=x+y;
	return (z);
}