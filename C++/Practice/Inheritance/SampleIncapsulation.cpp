#include<iostream>
using namespace std;
class person
{
    int age;
    string name;
    public:
        void setName(string name1)
        {
            this->name=name1;
        }
        string getName()
        {
            return name;
        }
        void setAge(int age1)
        {
            this->age=age1;
        }
        int getAge()
        {
            return age;
        }
};
int main()
{
    person obj;
    obj.setName("ABCD");
    obj.setAge(35d);
    cout<<obj.getName()<<endl;
    cout<<obj.getAge()<<endl;
    return 0;
}