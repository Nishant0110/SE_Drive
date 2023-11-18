#include<iostream>
using namespace std;
class person{
    public:
    void display()
    {
        cout<<"this is person class"<<endl;
    }
};
class A:public person{
    public:
    void display1()
    {
        cout<<"This is A class"<<endl;
    }
};
class B : public person{
    public:
    void display2()
    {
        cout<<"this is class B"<<endl;
    }
};
class C : public person{
    public:
    void display3()
    {
        cout<<"this is class C"<<endl;
    }
};
int main()
{
    A obj;
    B obj1;
    C obj2;
    obj.display();
    obj.display1();
    cout<<"---------------------------------"<<endl;
    obj1.display();
    obj1.display2();
    cout<<"---------------------------------"<<endl;
    obj2.display();
    obj2.display3();
    return 0;
}