#include <stdio.h>
main()
{
	int i, n, s = 0;
	printf("enter the value of natural numbar for Getting sum :");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		s = s + i;
	}
	printf("Sum Of Natural numbar is %d", s);
}
