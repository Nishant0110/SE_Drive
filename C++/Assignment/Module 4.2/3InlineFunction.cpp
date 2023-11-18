/*Write a program to find the multiplication values and the cubic values using
inline function*/
#include <iostream>
using namespace std;
inline int cube(int c)
{
    return c * c * c;
}
inline int multiplication(int a, int b)
{
    return a * b;
}
int main()
{
    int a, b, cuberes, c, mul;
    cout << "Enter the number for cube:";
    cin >> c;
    cuberes = cube(c);
    cout << "cube is: " << cuberes << endl;
    cout << "Enter any value of a & b:";
    cin >> a >> b;
    mul = multiplication(a, b);
    cout << "Multiplication is :" << mul << endl;
}
