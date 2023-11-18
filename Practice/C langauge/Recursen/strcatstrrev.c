#include<stdio.h>
main()
{
	char name[10],name1[20];
	printf("Enter Your Name:");
	scanf("%s%s",&name,&name1);
	printf("\n This is your reverse string:%s",strrev(name));
	printf("\n this is concatenet string:%s",strcat(name1,name));
}
