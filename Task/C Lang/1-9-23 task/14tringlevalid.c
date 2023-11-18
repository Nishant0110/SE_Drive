#include<stdio.h>
main()
{
	int angle1,angle2,angle3,sum;
	printf("Enter angle1 value:");
	scanf("%d",&angle1);
	printf("Enter angle2 value:");
	scanf("%d",&angle2);
	printf("Enter angle3 value:");
	scanf("%d",&angle3);
	sum=angle1+angle2+angle3;
	if(sum==180&&angle1>0&&angle2>0&&angle3>0)
	{
		printf("Tringle is valid");
	}
	else
	{
		printf("Tringle is not valid");
	}
} 
