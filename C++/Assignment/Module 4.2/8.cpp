/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the marks
obtained in two subjects and class result contains the total marks obtained in
the test. The class result can inherit the details of the marks obtained in the
test and roll number of students. (Multilevel Inheritance)*/
#include <iostream>
using namespace std;
class student
{
public:
    int rollnumber;
    void rollno()
    {
        cout << "Enter Roll No:";
        cin >> rollnumber;
    }
};
class test : public student
{
public:
    int mark1, mark2;
    void marks()
    {
        cout << "Enter two subject marks here:";
        cin >> mark1 >> mark2;
    }
};
class result : public test
{
public:
    int resulttotal;
    void totalmarks()
    {
        resulttotal = mark1 + mark2;
        cout << "Result is:" << resulttotal;
    }
};
int main()
{
    result obj;
    obj.rollno();
    obj.marks();
    obj.totalmarks();
}
