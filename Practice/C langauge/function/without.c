#include<stdio.h>
void fun();//pre define function
void main()
{
	fun();//calling function
}
void fun()//declaring function
{
	int a,b;//function body
	printf("Enter The Value Here:");
	scanf("%d%d",&a,&b);
	printf("%d",a+b);
}

