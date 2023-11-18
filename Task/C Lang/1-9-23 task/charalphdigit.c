#include<stdio.h>
#include<conio.h>
void main()
{
	char ch[3];
	printf("enter any character:");
	scanf("%s",&ch);
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	{
		printf("Inputed character is Alphabat:%s",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("Inputed character is Numeric:%s",ch);
	}
	else
	{
		printf("Inputed character is Symbol:%s",ch);
	}
}
