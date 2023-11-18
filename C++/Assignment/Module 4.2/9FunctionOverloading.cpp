/* Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading */
#include <iostream>
using namespace std;
class calculator
{
public:
    void addition(int a, int b)
    {
        cout << "This is your addition:" << a + b << endl;
    }
    void addition(double a, double b)
    {
        cout << "This is your addition:" << a + b << endl;
    }
    void subtraction(int a, int b)
    {
        cout << "This is your subtraction:" << a - b << endl;
    }
    void subtraction(double a, double b)
    {
        cout << "This is your subtraction:" << a - b << endl;
    }
    void multiplication(int a, int b)
    {
        cout << "This is your multiplication:" << a * b << endl;
    }
    void multiplication(double a, double b)
    {
        cout << "This is your multiplication:" << a * b << endl;
    }
    void division(int a, int b)
    {
        cout << "This is your division:" << a / b << endl;
    }
    void division(double a, double b)
    {
        cout << "This is your division:" << a / b << endl;
    }
};
int main()
{
    calculator obj;
    obj.addition(10, 11);
    obj.addition(20.5, 30.8);
    obj.subtraction(50, 10);
    obj.subtraction(45.6, 40.4);
    obj.multiplication(30, 2);
    obj.multiplication(25.2, 2.2);
    obj.division(100, 10);
    obj.division(100.4, 4.0);
}