#include<stdio.h>
int sum();//function Declaration
void main()
{
	int z;
	z=sum();//Funcation Calling
	printf("Sum of a & b is:%d",z);
}
int sum()//function definition
{
	int a,b,c;
	printf("Enter the value of a & b");
	scanf("%d%d",&a,&b);
	c=a+b;	
	return c;
}
