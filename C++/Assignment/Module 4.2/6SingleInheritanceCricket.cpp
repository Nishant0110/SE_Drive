/*
Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/
#include <iostream>
using namespace std;
class cricketer
{
protected:
    int age;
    string name;

public:
    void datainputper()
    {
        cout << "Enter batsman name:" << endl;
        cin >> name;
        cout << "Enter batsman age:" << endl;
        cin >> age;
    }
};
class batsman : public cricketer
{   public:
    int run, performance;
    double average;
    void data()
    {
        datainputper();
        cout << "Enter Performance match:" << endl;
        cin >> performance;
        cout << "Enter run:" << endl;
        cin >> run;
    }
    void average1()
    {
        int playedmatch;
        cout << "Enter the match played:";
        cin >> playedmatch;
        average = run / playedmatch;
    }
    void display()
    {
        cout<<"Cricketer name is :"<<name<<endl;
        cout<<"Cricketer age is :"<<age<<endl;
        cout<<"Cricketer performance is :"<<performance<<endl;
        cout<<"Cricketer run is :"<<run<<endl;
        cout<<"Cricketer run average"<<average<<endl;
        cout<<"Cricketer sverage is :"<<name<<endl;
        
    }
};
int main()
{
    batsman obj;
    obj.data();
    obj.average1();
    obj.display();
}
