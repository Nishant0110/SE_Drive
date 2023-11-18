#include <iostream>
using namespace std;
int main()
{
    int i, j, num;
    cout << "Enter the number you want to print pattern:";
    cin >> num;
    for (i = 0; i < num; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
