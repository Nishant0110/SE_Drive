/*

 *
 * *
 * * *
 * * * *
 * * * * *		*/

#include<stdio.h>
main()
{
	int i,j;//piramid top side 1 down side 5
	for(i=1;i<=5;i++)//row
	{
		for(j=1;j<=i;j++)//column
		{
			printf("*");
		}
		printf("\n");
	}
	
}
