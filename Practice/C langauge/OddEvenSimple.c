#include <stdio.h>

main()
{
	int n=0;
	// clrscr();
	printf("enter any number:");
	scanf("%d", &n);
	if (n % 2 == 0)
	{
		printf("You entered even number");
	}
	else if (n % 2 != 0)
	{
		printf("You entered odd number");
	}
}
