#include<stdio.h>
void sum(int x,int y);
void main()
{
	int a,b,c;
	printf("Enter value of a & b:");
	scanf("%d%d",&a,&b);
	sum(a,b);

}
void sum(int x,int y)
{
	int z;
	z=x+y;
	printf("Sum is:%d",z);
}