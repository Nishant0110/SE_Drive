#include<stdio.h>
void main()
{
	int i,eventotal=0,oddtotal=0,even=0,odd=0,num=0;
	for(i=1;i<=10;i++)
	{
		printf("enter the numbers:");
		scanf("%d",&num);
		if(num%2==0)
		{
			even++;
			eventotal+=num;
		}
		else
		{
			odd++;
			oddtotal+=num;
		}
	}
	printf("total of even is %d\n",eventotal);
	printf("total of odd is %d\n",oddtotal);
	printf("total of even no. count is %d\n",even);
	printf("total of odd no %d\n",odd);
	//printf("total of even is %d\n",num);
}
