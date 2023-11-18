#include<iostream>
using namespace std;
class person{
    public:
    void display()
    {
        cout<<"This is person class"<<endl;
    }
};
class father{
    public:
    void display1()
    {
        cout<<"This is father class"<<endl;
    }
};
class child :public father,public person
{   public:
    void display2()
    {
        cout<<"this is your child class";
    }
};
int main()
{
    child obj;
    obj.display();
    obj.display1();
    obj.display2();
    return 0;
}