#include <stdio.h>

int main() {
    int row,col;
    for (row = 0; row<=4; row++)
	 {
                for (col=0; col<=4;col++)
				{			
                	if(row==4-col)
                	{
                		printf("$");
					}
					else
					{
						printf("*");	
					}
	            
        		}		
        			printf("\n"); 
    }
 
 
 printf("\n"); 
 for (row = 0; row<=4; row++)
	 {
        for (col=0; col<=4;col++)
		{ 
                if(row==col)
                {
                	printf("$");
				}
				else
				{
					printf("*");	
				}
            
        }
        printf("\n"); 
    }
   
    return 0;
}

