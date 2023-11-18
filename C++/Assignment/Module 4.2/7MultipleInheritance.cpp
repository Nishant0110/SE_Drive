/*Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/
#include <iostream>
using namespace std;
class person
{
protected:
    string name;
    int age;

public:
    void input()
    {
        cout << "Enter the name:" << endl;
        cin >> name;
        cout << "Enter the age:" << endl;
        cin >> age;
    }
};
class student
{
public:
    double percentage;
    void per()
    {
        cout << "Enter the percentage:";
        cin >> percentage;
    }
};
class teacher : public person, public student
{
public:
    double teachersalary;
    void salary()
    {
        cout << "Enter the teacher salary:";
        cin >> teachersalary;
    }
    void display()
    {
        cout << "Student name is :" << name << endl;
        cout << "Student Age:" << age << endl;
        cout << "Student Percentage:" <<percentage << endl;
        cout << "Teacher salary:" << teachersalary << endl;
    }
};
int main()
{
    teacher obj;
    obj.input();
    obj.per();
    obj.salary();
    obj.display();
}