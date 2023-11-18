#include<stdio.h>
#include<string.h>
void main()
{
    char name[10],name1[10];
    printf("enter your name:\n");
    gets(name);
    printf("enter your name1:\n");
    gets(name1);
    if(strcmp(name,name1)==0)
    {
        printf("Equal");
    }
    else{
        printf("not equal");
    }

}