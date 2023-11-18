#include<stdio.h>
main()
{
	int num;
	printf("enter value of num");
	scanf("%d",&num);
	if(num%5==0 && num%11==0)
	{
		printf("Number is divisible by 5 & 11");
	}
	else
	{
		printf("Number is not divisible by 5 & 11");
	}
	
}
