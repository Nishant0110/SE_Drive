#include<stdio.h>
void sum();//function Declaration
void main()
{
	sum();//Funcation Calling
}
void sum()//function definition
{
	int a,b,c;
	printf("Enter the value of a & b");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Sum of a & b is:%d",c);
}
