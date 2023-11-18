#include<stdio.h>
main()
{
	int row,col;
	
	//row
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d",row);
		}
		printf("\n");
	}
	
	//column
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d",col);
		}
		printf("\n");
	}
}
