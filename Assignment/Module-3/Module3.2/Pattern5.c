/*
* 
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * *
* * * *
* * * 
* * 
*
*/#include<stdio.h>
void main()
{
    int i,j,k=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=6;i>=0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }printf("\n");
    }
}