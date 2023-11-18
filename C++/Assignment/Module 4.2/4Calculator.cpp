/* Write a program of Addition, Subtraction, Division, Multiplication using
constructor. */
#include <iostream>
using namespace std;
class calculator
{
public:
    calculator(double a, double b)
    {
        int choice;
        cout << "Choice Any Option" << endl
             << "1 Addition" << endl
             << "2 Subtraction" << endl
             << "3 Multiplication" << endl
             << "4 Division" << endl;
        cin >> choice;
        switch (choice)
        {
            int result;
        case 1:
            result = a + b;
            cout << "Result is: " << result;
            break;
        case 2:
            result = a - b;
            cout << "Result is: " << result;
            break;
        case 3:
            result = a * b;
            cout << "Result is: " << result;
            break;
        case 4:
            result = a / b;
            cout << "Result is: " << result;
            break;

        default:
            cout << "Invalid Input";
            break;
        }
    }
};
int main()
{
    int a, b;
    cout << "Enter the value of a & b:";
    cin >> a >> b;
    calculator obj(a, b);
    return 0;
}