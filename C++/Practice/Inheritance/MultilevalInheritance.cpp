#include <iostream>
using namespace std;
class Person
{
public:
    void display()
    {
        cout << "This is person class" << endl;
    }
};
class Father : public Person
{
public:
    void display1()
    {
        cout << "This is father class" << endl;
    }
};
class child : public Father
{
public:
    void display3()
    {
        cout << "This is child class";
    }
};
int main()
{
    child obj;
    obj.display();
    obj.display1();
    obj.display1();
    return 0;
}
