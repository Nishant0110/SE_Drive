/*
class class_name
{
    public:
    function
};
main()
{
    class_name obj;
}
*/
#include<iostream>
using namespace std;
class person
{
    public://access specifier public,private,protected
    void display()
    {
        cout<<"This is your person class";
    }
};
int main()
{
    person obj;//creating object
    obj.display();//calling method throw object
    return 0;
}
