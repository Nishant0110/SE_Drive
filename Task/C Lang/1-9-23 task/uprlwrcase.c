#include<stdio.h>
main()
{
	char a;
	printf("Enter Value:");
	scanf("%c",&a);
	if(a>='A'&&a<='Z')
	{
		printf("Entered Character is Uppercase:");
	}
	else if(a>='a'&& a<='z')
	{
		printf("Entered Character is Lowercase:");
	}
	else
	{
		printf("Invalid Choice:");
		
	}
}


