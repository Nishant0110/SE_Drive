#include<stdio.h>
main()
{
	int a,b,c,max;
	//clrscr();
	printf("enter value of a");
	scanf("%d",&a);
	printf("enter value of b");
	scanf("%d",&b);
	printf("enter value of c");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			max = a;
			//printf("Maximum=%d",a);
		}	
		else
		{
			max = c;
			//Printf("Maximum=%d",c);
		}
	}
	else
	{
		if(b>c)
		{
			max = b;
			//printf("Maximum=%d",b);
		}
		else
		{
			max = c;
		//	printf("Maximum=%d",c);
		}
	}
	printf("%d",max);
	return 0;
}

