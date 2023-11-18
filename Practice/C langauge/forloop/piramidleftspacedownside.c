/*
*****
 ****
  ***
   **
    *
*/
#include<stdio.h>
main()
{
	int i,j,k;//piramid top side 1 down side 5
	for(i=1;i<=5;i++)//row
	{
		for(j=1;j<i;j++)//space
		{
			printf(" ");
		}
		for(k=i;k<=5;k++)//column
		{
			printf("*");
		}
		printf("\n");
		
	}
	
}
