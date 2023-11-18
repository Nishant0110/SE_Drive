/*Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading 
Rectangle:Area * breadth
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area*/
#include<iostream>
using namespace std;
const double pi=3.14;
class shape
{
    public:
    double circle(double r)
    {
        return pi*r*r;
    }
    double circle(double r,double breadth)
    {
        return 0.5*r*breadth;
    }
    double circle(int area,int breadth)
    {
        return area*breadth;
    }
};
int main()
{
    double a,b,c;
    shape abc;
    a=abc.circle(5);
    cout<<"Area of circle is:"<<a<<endl;
    b=abc.circle(5,2);
    cout<<"area of triengle is:"<<b<<endl;
    c=abc.circle(10,3);
    cout<<"area of triengle is:"<<c<<endl;
}