/*Write a Program of Two 1D Matrix Addition using Operator Overloading*/
#include <iostream>
using namespace std;
class matrix
{
    int a[1];

public:
    void accept();
    void display();
    void operator+(matrix x);
};
void matrix::accept()
{
    int i, j;
    cout << "\n Enter matrix element:\n";
    for (int i = 0; i < 1; i++)
    {
        cin >> a[i];
    }
}
void matrix::display()
{
    for (int i = 0; i < 1; i++)
    {
        cout << a[i] << endl;
    }
}
void matrix::operator+(matrix x)
{
    int mat[1], i;
    for (i = 0; i < 1; i++)
    {
        mat[i] = a[i] + x.a[i];
    }
    cout << "Addition of matrix is :";
    for (i = 0; i < 1; i++)
    {
        cout << mat[i] << endl;
    }
}
int main()
{

    matrix m, n;
    m.accept();
    n.accept();
    cout << "Firsr matrix is :";
    m.display();
    cout << "Second matrix is :" ;
    n.display();
    m + n;
    return 0;
}
