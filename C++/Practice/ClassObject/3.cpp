#include<iostream>
using namespace std;
class person
{
    public:
    person(int num,int num1)
    {
        cout<<"this is your par con:"<<num+num1;
    }
};
int main()
{
    int num,num1;
    cout<<"Enter Your Value Here:";
    cin>>num;
    cout<<"Enter Your Value Here:";
    cin>>num1;
    person obj(num,num1);
}