#include<stdio.h>
void main()
{
    int num,i,j[100],k;
    printf("How many table do you want to print : ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("enter the table number:\n");
        scanf("%d",&j[i]);
        printf("\n");
    }
    printf("this is your table:");
    for(i=0;i<num;i++)
    {
        printf("%d \t",j[i]);
    }
    for(i=0;i<num;i++)
    {
        for(k=1;k<=10;k++)
        {
            printf("%d*%d=%d\n",j[i],k,k*j[i]);
        }
    }
}