#include<stdio.h>
main()
{
	int days;
	printf("Enter days");
	scanf("%d",&days);
	switch(days)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("saturday");
			break;
		default:
			printf("invalid");
			break;
		
	}
}
