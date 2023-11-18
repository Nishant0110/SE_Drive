#include<stdio.h>
main(){
	int marks;
	printf("enter marks");
	scanf("%d",&marks);
	if(marks >= 90 && marks <=100)
	{
		printf("a grade");
	}
	else if (marks >= 70 && marks <90)
	{
		printf("b grade");
	}
	else if (marks >=101)
	{
		printf("invalid input");
	}
	else
	{
		printf("fail");
	}
}
