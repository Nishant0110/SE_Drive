#include<stdio.h>
#include<string.h>
void main()
{
    char name[20],name1[20];
    printf("Enter Your Name:");
    gets(name);
    strcpy(name1,name);
    printf("This is your copied string name 1:%s",name1);
}