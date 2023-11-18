#include <stdio.h>
main()
{
	int age;
	printf("enter age");
	scanf("%d", &age);
	if (age >= 18)
	{
		printf("Eligable for Vote");
	}
	else
	{
		printf("Not Eligable for Vote.");
	}
}
