/*    *
     **
	***
   ****
  *****    */	
#include<stdio.h>
main()
{
	int i,j,k;//piramid top side 1 down side 5
	for(i=1;i<=5;i++)//row
	{
		for(j=i;j<5;j++)//column
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	
}
