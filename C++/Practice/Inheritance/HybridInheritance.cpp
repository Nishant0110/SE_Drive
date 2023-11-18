#include <iostream>
using namespace std;
class person
{
public:
    void display()
    {
        cout << "this is your person class" << endl;
    }
};
class A : public person
{
public:
    void display1()
    {
        cout << "this is your A class" << endl;
    }
};
class B
{
public:
    void display2()
    {
        cout << "this is your B class" << endl;
    }
};
class C : public B, public A
{
public:
    void display3()
    {
        cout << "this is your C class" << endl;
    }
};
int main()
{
    C obj;
    obj.display();
    obj.display1();
    obj.display2();
    obj.display3();
    return 0;
}
