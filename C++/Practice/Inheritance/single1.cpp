#include<iostream>
using namespace std;
class A
{
    public:
    void clear()
    {
        cout<<"this is class a"<<endl;
    }
};
class B : public A
{
    public:
    void clean()
    {
        cout<<"this is class b"<<endl;
    }
};
int main()
{
    B x;
    x.clean();
    x.clear();
    return 0;

}