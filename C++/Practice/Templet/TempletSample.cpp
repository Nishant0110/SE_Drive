#include<iostream>
using namespace std;
template <typename T>T myMax(T x,T y)
{
    return(x>y)?x:y;
}
int main()
{
    cout<<myMax<int>(12,7)<<endl;
    cout<<myMax<double>(3.5,7.5)<<endl;
    cout<<myMax<char>('g','e')<<endl;
    return 0;
}