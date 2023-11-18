#include<iostream>
using namespace std;
class gfather
{
    public:
    void Gender()
    {
        cout<<"This is gfather class"<<endl;
    }
};
class father : public gfather
{
    public:
    void Men()
    {
        cout<<"This is father class "<<endl;
    }
};
class child:public father
{
    public:
    void Women()
    {
        cout<<"This is child class"<<endl;
    }
};
int main()
{
    child obj;
    obj.Gender();
    obj.Men();
    obj.Women();
}