#include<iostream>
using namespace std;
class per
{
    public:
    per()
    {
        cout<<"This is per class";
    }
    ~per()
    {
        cout<<"\n You are calling destroy construct";
    }
};
int main()
{
    per obj;
    per obj1;
    per obj2;
    return 0;
}