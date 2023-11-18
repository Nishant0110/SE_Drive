/*Write a program of Addition, Subtraction, Division, Multiplication using constructor.*/
#include <iostream>
using namespace std;
class calc
{
public:
    calc(double val1, double val2)
    {
        int choice;
        cout << "enter choice of calculation" << endl
             << "1 addition" << endl
             << "2 subtraction" << endl
             << "3 multiplication" << endl
             << "4 dividion:";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "sum is :" << val1 + val2;
        }
        case 2:
        {
            cout << "subtraction is :" << val1 - val2;
        }
        case 3:
        {
            cout << "multiplication is :" << val1 * val2;
        }
        case 4:
        {
            cout << "divison is :" << val1 / val2;
        }
        }
    }
};
int main()
{
    int a, b;
    cout << "Enter value of a:";
    cin >> a;
    cout << "Enter value of b:";
    cin >> b;
    calc obj(a, b);
    return 0;
}