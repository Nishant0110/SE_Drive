#include<stdio.h>
int main()
{
	int y;
	printf("enter Year");
	scanf("%d",&y);
	if(y%400==0 || y%4==0 && y%100!=0)
	{
		printf("entered year is leapyear");
	}
	else
	{
		printf("entered year is not leapyear");
	}
}
