// WAP to create simple calculator using class
#include <iostream>
using namespace std;
class calc
{
public:
    double val1, val2, res;
    void display()
    {
        cout << "Enter any value of a & b:";
        cin >> val1 >> val2;
    }
    void calculation()
    {
        int choise;
        cout << "Choose Any Operation:"<<endl<<"1 for addition"<<endl<<"2 for subtraction"<<endl<<"3 for multiplication"<<endl<<"4 for division:";
        cin >> choise;
        switch (choise)
        {
        case 1:
        {
            res = val1 + val2;
            cout << "sum is :" << res;
        }
        break;
        case 2:
        {
            res = val1 - val2;
            cout << "subtraction is :" << res;
        }
        break;
        case 3:
        {
            res = val1 * val2;
            cout << "multiplication is :" << res;
        }
        break;
        case 4:
        {
            res = val1 / val2;
            cout << "division is :" << res;
        }
        break;
        default:
        {
            cout << "invalid input";
        }
        break;
        }
    }
};
int main()
{
    calc obj;
    obj.display();
    obj.calculation();
}