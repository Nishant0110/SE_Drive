#include<stdio.h>
//(condition)?exp1:exp2;
main()
{
	int age;
	printf("enter value of age:");
	scanf("%d",&age);
	(age>18)?printf("Elegible"):printf("Not Elegible");
}
