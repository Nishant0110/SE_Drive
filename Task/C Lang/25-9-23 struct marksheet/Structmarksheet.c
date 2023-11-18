#include <stdio.h>
#include <string.h>
struct table
{
    int serial_number, marks, number;
    char name[20], surname[20], grade[5];
} t1,t2,t3,t4,t5;
void main()
{
    char name[20], surname[20], grade[5];
    char name1[20], surname1[20], grade1[5];
    char name2[20], surname2[20], grade2[5];
    char name3[20], surname3[20], grade3[5];
    char name4[20], surname4[20], grade4[5];
        printf("Enter serial number:");
        scanf("%d", &t1.serial_number);
        printf("Enter  your name :");
        scanf("%s", &name);
        strcpy(t1.name, name);
        printf("Enter your surname:");
        scanf("%s", &surname);
        strcpy(t1.surname, surname);
        printf("Enter your marks:");
        scanf("%d", &t1.marks);
        printf("Enter your grade:");
        scanf("%s", &grade);
        strcpy(t1.grade, grade);
        fflush(stdin);
        
        
        printf("Enter serial number:");
        scanf("%d", &t2.serial_number);
        printf("Enter  your name :");
        scanf("%s", &name1);
        strcpy(t2.name, name1);
        printf("Enter your surname:");
        scanf("%s", &surname1);
        strcpy(t2.surname, surname1);
        printf("Enter your marks:");
        scanf("%d", &t2.marks);
        printf("Enter your grade:");
        scanf("%s", &grade1);
        strcpy(t2.grade, grade1);
        fflush(stdin);
        
        printf("Enter serial number:");
        scanf("%d", &t3.serial_number);
        printf("Enter  your name :");
        scanf("%s", &name2);
        strcpy(t3.name, name2);
        printf("Enter your surname:");
        scanf("%s", &surname2);
        strcpy(t3.surname, surname2);
        printf("Enter your marks:");
        scanf("%d", &t3.marks);
        printf("Enter your grade:");
        scanf("%s", &grade2);
        strcpy(t3.grade, grade2);
        fflush(stdin);
        
         printf("Enter serial number:");
        scanf("%d", &t4.serial_number);
        printf("Enter  your name :");
        scanf("%s", &name3);
        strcpy(t4.name, name3);
        printf("Enter your surname:");
        scanf("%s", &surname3);
        strcpy(t4.surname, surname3);
        printf("Enter your marks:");
        scanf("%d", &t4.marks);
        printf("Enter your grade:");
        scanf("%s", &grade3);
        strcpy(t4.grade, grade3);
        fflush(stdin);
        
         printf("Enter serial number:");
        scanf("%d", &t5.serial_number);
        printf("Enter  your name :");
        scanf("%s", &name4);
        strcpy(t5.name, name4);
        printf("Enter your surname:");
        scanf("%s", &surname4);
        strcpy(t5.surname, surname4);
        printf("Enter your marks:");
        scanf("%d", &t5.marks);
        printf("Enter your grade:");
        scanf("%s", &grade4);
        strcpy(t5.grade, grade4);
        fflush(stdin);
    
    printf("serial_number\tname\tsurname\t\tmarks\tgrade\n");
    printf("%d\t\t%s\t%s\t\t%d\t%s\t\n",t1.serial_number,name,surname,t1.marks,grade);
    printf("%d\t\t%s\t%s\t%d\t%s\t\n",t2.serial_number,name1,surname1,t2.marks,grade1);
    printf("%d\t\t%s\t%s\t\t%d\t%s\t\n",t3.serial_number,name2,surname2,t3.marks,grade2);
    printf("%d\t\t%s\t%s\t\t%d\t%s\t\n",t4.serial_number,name3,surname3,t4.marks,grade3);
    printf("%d\t\t%s\t%s\t\t%d\t%s\t\n",t5.serial_number,name4,surname4,t5.marks,grade4);
}
