#include <iostream>
using namespace std;
class person
{
public:
    virtual void show() = 0;
};
class person1 : public person
{
public:
    void show()
    {
        cout << "This is my child class" << endl;
    }
};
class child : public person
{
public:
    void show()
    {
        cout << "This is your child class" << endl;
    }
};
int main()
{
    person1 obj;
    obj.show();
    child obj1;
    obj1.show();
}