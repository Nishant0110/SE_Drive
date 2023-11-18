#include<iostream>
using namespace std;
class gfather
{
    public:
    void gfathe()
    {
        cout<<"this is gfather class"<<endl;
    }
};
class father:public gfather
{
    public:
    void fath()
    {
        cout<<"this is father class"<<endl;
    }
};
class child:public gfather
{
    public:
    void chil()
    {
        cout<<"this is child class"<<endl;
    }
};
class child_2:public gfather
{
    public:
    void chil_2()
    {
        cout<<"this is child_2 class"<<endl;
    }
};
int main()
{
    father fath;
    child chi;
    child_2 chi_2;
    fath.gfathe();
    fath.fath();
    chi.gfathe();
    chi.chil();
    chi_2.gfathe();
    chi_2.chil_2();
}