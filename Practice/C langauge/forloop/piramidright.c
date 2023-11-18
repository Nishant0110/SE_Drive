/*
 * * * * *
 * * * *  
 * * *    
 * *      
 * 
 /*
 #include<stdio.h>
main()
{
	int i,j;
	//piramid top side 5 down side 1
	for(i=1;i<=5;i++)//row
	{
		for(j=5;j>=i;j--)//column
		{
			printf(" *");
		}
		printf("\n");
	}
	
}
