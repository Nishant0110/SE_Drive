#include <iostream>
using namespace std;
class tops
{
public:
    void faculty()
    {
        cout << "Reception class" << endl;
    }
};
class richa :public tops
{
public:
    void faculty1()
    {
        cout << "management class" << endl;
    }
};
class sobha 
{
public:
    void faculty2()
    {
        cout << "counselling class" << endl;
    }
};
class student:public richa,public sobha
{
public:
    void faculty3()
    {
        cout << "trainee class" << endl;
    }
};
int main()
{
    student obj;
    obj.faculty();
    obj.faculty1();
    obj.faculty2();
    obj.faculty3();
}