#include<stdio.h>
#include<string.h>
struct marksheet{
    int serialNumber,mark;
    char name[10],surname[10],grade[1];
}m1;
void main()
{   
    char name[10],surname[10],grade[1];
    printf("Enter Serial No:");
    scanf("%d",&m1.serialNumber);
    printf("Enter Name:");
    scanf("%s",&name);
    strcpy(m1.name,name);
    printf("Enter Surname:");
    scanf("%s",surname);
    strcpy(m1.surname,surname);
    printf("Enter Mark:");
    scanf("%d",&m1.mark);
    printf("Enter Grade:");
    scanf("%s",grade);
    strcpy(m1.grade,grade);

    printf("")



    /* printf("Serial Number is :%d\n",m1.serialNumber);
    printf("Name is :%s\n",m1.name);
    printf("Surname Is %s\n",m1.surname);
     printf("Serial Mark is :%d\n",m1.mark);
     printf("grade Is %s\n",m1.grade); */
    

}