#include <stdio.h>
main()
{
	int a;
	printf("enter any value ");
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("Entered Number is Even ");
	}
	else
	{
		printf("Entered Number is Odd");
	}
}