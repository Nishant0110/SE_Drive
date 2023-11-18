#include<stdio.h>
main()
{
	int side1,side2,side3;
	printf("enter value of tringle three side:");
	scanf("%lf%lf%lf",&side1,&side2,&side3);
	if((side1+side2>side3)&&(side1+side3>side2)&&(side2+side3>side1))
	{
		printf("Tringle is valid");
	}
	else
	{
		printf("Tringle is not valid");
	}
}

