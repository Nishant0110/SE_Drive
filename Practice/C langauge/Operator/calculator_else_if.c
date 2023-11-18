#include <stdio.h>
void main()
{
	int a, b, tot, add, sub, mul, div, rem;
	printf("Enter operation\n1=addition\n2=subtraction\n3=multiplication\n4=dividion\n5=remainder:");
	scanf("%d", &tot);
	printf("enter any two number a & b:");
	scanf("%d%d", &a, &b);	
	if (tot == 1)
	{
		add = a + b;
		printf("addition is =%d", add);
	}
	else if (tot == 2)
	{
		sub = a - b;
		printf("subtraction is =%d", sub);
	}
	else if (tot == 3)
	{
		mul = a * b;
		printf("multiplication is =%d", mul);
	}
	else if (tot == 4)
	{
		div = a / b;
		printf("division is =%d", div);
	}
	else if (tot == 5)
	{
		rem = a % b;
		printf("remainder is =%d", rem);
	}
	else
	{
		printf("invalid inputed choice");
	}
	return 0;
}
