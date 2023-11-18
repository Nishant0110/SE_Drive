#include <iostream>
using namespace std;
int main()
{
    int num[10], i, n, j;
    cout << "How many table do you want to print?:";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter Your Number:";
        cin >> num[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << "Enter the number you want to print of table:" << endl;
        for (j = 1; j <= 10; j++)
        {
            cout << num[i] << " * " << j << " = " << num[i] * j << endl;
        }
    }
}