#include<stdio.h>
void main()
{
	char a;
	printf("enter any character:");
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		printf("Inputed character is vowel");
	}
	else if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
	
	{
		printf("Inputed character is consonant");
	}
	
	else
	{
		printf("Invalid Character");
	}
}
