#include<stdio.h>  
int main()
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",j+'a');
        }
        printf("\n");
    }
    
	for(i=4;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",j+'1-a');
        }
        printf("\n");
    }
    return 0;
}
