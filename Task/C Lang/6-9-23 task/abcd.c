#include<stdio.h>
main()
{
	int row,col;	
	//row
	for(row=0;row<=4;row++)
	{
		for(col=0;col<=row;col++)
		{
			printf("%c",row+'a');
		}
		printf("\n");
	}
	printf("\n");
	
	
	for(row=0;row<=4;row++)
	{
		for(col=0;col<=row;col++)
		{
			printf("%c",col+'a');
		}
		printf("\n");
	}
	
	
	
	printf("\n");
		for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d",col%2);
		}
		printf("\n");
	}
	

}
