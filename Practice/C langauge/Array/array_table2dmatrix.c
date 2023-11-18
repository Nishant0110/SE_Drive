#include<stdio.h>
int main()
{
    int arr[3][3],i=0,j=0,arr1[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the values[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("Enter The Value of array1:[%d][%d]",i,j);
    		scanf("%d",&arr1[i][j]);
		}
	}
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");          
    }
    printf("--------This is your matrix array1 table----------\n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d",arr1[i][j]);
		}
		printf("\n");
	}
	
    return 0;
}
