#include<iostream>
using namespace std;
class person
{
    public:
    void sum(int a,int b)
    {
        cout<<"this is your addition:"<<a+b<<endl;
    }
    void sum(double a,double b)
    {
        cout<<"this is your addition:"<<a+b<<endl;
    }
};
int main()
{
    person obj;
    obj.sum(10.5,11.6);
    obj.sum(10.2,11.3);
    obj.sum(2,3);
    return 0;
}