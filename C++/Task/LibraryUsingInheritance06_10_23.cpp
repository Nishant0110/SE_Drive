#include<iostream>
using namespace std;
class lib
{
    public:
    int price,page;
    string name,author,publication;
    void data(string name,int price,int page,string author,string publication)
    {
        this->name=name;
        this->price=price;
        this->page=page;
        this->author=author;
        this->publication=publication;
    }
};
int main()
{
    lib obj1;
    obj1.data("C#",500,130,"C V Raman","Bharat Prakashan");
    cout<<"Book Name:"<<obj1.name<<endl;
    cout<<"Price:"<<obj1.price<<endl;
    cout<<"Page:"<<obj1.page<<endl;
    cout<<"Author:"<<obj1.author<<endl;
    cout<<"Publication:"<<obj1.publication;
    return 0;
}