#include <iostream>
using namespace std;
class person
{
public:
    void display()
    {
        cout << "this is display 1" << endl;
    }
};
class person2 : public person
{
public:
    void display()
    {
        cout << "this is display 2" << endl;
    }
};
int main()
{
    person2 obj;
    obj.person::display();
    obj.display();
    return 0;
}