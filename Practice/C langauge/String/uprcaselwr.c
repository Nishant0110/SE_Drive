#include <stdio.h>
#include <string.h>
void main()
{
    char name[10], name1[10];
    printf("enter your name:\n");
    gets(name);
    printf("enter your name1:\n");
    gets(name1);
    printf("\nThis is your capital latter:%s", strupr(name));
    printf("\nThis is your lawer latter:%s", strlwr(name1));
}