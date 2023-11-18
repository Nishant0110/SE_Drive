/*
1
23
456
78910
*/
#include<stdio.h>
void main()
{
    int i,j,count=1;
    for(i=1;i<=4;i++)//row
    {
        for(j=1;j<=i;j++)//column
        {
            printf("%d",count);
            count++;
            
        }
        printf("\n");
    }

}