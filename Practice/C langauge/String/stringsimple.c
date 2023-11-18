#include<stdio.h>
#include<string.h>
void main()
{
    char name[20];
    printf("Enter Your Name:");
  //  scanf("%s",&name);//
   gets(name);//for space count
    printf("This is your Name Length:%d",strlen(name));
}