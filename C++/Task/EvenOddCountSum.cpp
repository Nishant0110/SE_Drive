#include <iostream>
using namespace std;
int evencheck(int num[])
{
    int i;
    cout << "This is even number:";
    for (i = 0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            cout << num[i] << "\t";
        }
    }
    cout << endl;
    cout << "This is odd number:";
    for (i = 0; i < 10; i++)
    {
        if (num[i] % 2 != 0)
        {
            cout << num[i] << "\t";
        }
    }
}
int odd(int num[])
{
    int i, odd[10], o = 0, oddtotal = 0;
        cout << endl
             << "This is odd number Counter:";
        for (i = 0; i < 10; i++)
        {
            if (num[i] % 2 != 0)
            {
                odd[o] = num[i];
                o++;
                oddtotal += num[i];
            }
        }
        cout << o << "\t" << endl;
        cout << "This is Odd Number Sum:" << oddtotal << endl;

    for(i=1;i<=10;i++)
    {
        if(num[i]%2 != 0)
        {
            cout<<endl<<"This is table of:"<<num[i]<<endl;
            for(int m=1;m<=10;m++)
            {
                cout<<endl<<num[i]<<"*"<<m<<"="<<num[i]*m;
            }
        }
    }
}
int even(int num[])
{
    int i, even[10], e = 0, eventotal = 0, m;
    cout << endl
         << "This is even number counter:";
    for (i = 0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            even[e] = num[i];
            e++;
            eventotal += num[i];
        }
    }
    cout << e << "\t" << endl;
    cout << "This is even number sum:" << eventotal;

    for (i = 0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            cout << endl<< "This is table of:" << num[i] << endl;
            for (m = 1; m <= 10; m++)
            {
                cout << num[i] << " * " << m << " = " << num[i] * m << endl;
            }
        }
    }
}
int main()
{
    int i, num[10];
    for (i = 0; i < 10; i++)
    {
        cout << "Enter number here:";
        cin >> num[i];
    }
    evencheck(num);
    odd(num);
    even(num);
}