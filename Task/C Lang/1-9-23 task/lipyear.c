#include<stdio.h>
main()
{
	int year;
	printf("enter year");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("Entered year is Leap Year");
	}
	else
	{
		printf("Entered year is not Leap Year");
	}
	
}
