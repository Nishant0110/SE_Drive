/*
Syntex:
Struct Struc_name{
    Member Function
}obj;
*/
#include<stdio.h>
#include<string.h>
struct person{
    int age;
    float salary;
    char name[20];
}p1,p3;
main()
{
    struct person p2={23,75000.25,"Nirlaj"};
    char Name[20],nam[20];
    printf("Enter Your Name:");
    scanf("%s",&Name);
    strcpy(p1.name,Name);
    printf("Enter Your age :");
    scanf("%d",&p1.age);
    printf("Enter Your Salary :");
    scanf("%f",&p1.salary);

    printf("%s\n",p1.name);
    printf("%d\n",p1.age);
    printf("%.2f\n",p1.salary);

    printf("%s\n",p2.name);
    printf("%d\n",p2.age);
    printf("%.2f\n",p2.salary);

    printf("Enter Your Name:");
    scanf("%s",&nam);
    strcpy(p3.name,nam);
    printf("Enter Your age :");
    scanf("%d",&p3.age);
    printf("Enter Your Salary :");
    scanf("%f",&p3.salary);

    printf("%s\n",p3.name);
    printf("%d\n",p3.age);
    printf("%.2f\n",p3.salary);



}