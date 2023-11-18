/*Write a program to concatenate the two strings using Operator Overloading*/
#include<iostream>
#include<string.h>
using namespace std;
class anker
{
    public:
    char str1[10],str2[10];
    anker(char s1[],char s2[])
    {
        strcpy(this->str1,s1);
        strcpy(this->str2,s2);
    }
    void operator+()
    {
        cout<<strcat(str1,str2);
    }
};
int main()
{
    char s1[]="Nishant";
    char s2[]="Lakhani";
    anker t(s1,s2);
    +t;
    return 0;
}
