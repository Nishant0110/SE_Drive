#include<iostream>
using namespace std;
class lib
{
    int bookpage,price;
    string bookname,author,publication;
    public:
    void setBookname(string bookname1)
    {
        this->bookname=bookname1;
    }
    string getBookname()
    {
        return bookname;
    }
    void setBookpage(int bookpage1)
    {
        this->bookpage=bookpage1;
    }
    int getBookpage()
    {
        return bookpage;
    }
    void setBookauthor(string author1)
    {
        this->author=author1;
    }
    string getBookauthor()
    {
        return author;
    }
    void setPrice(int price1)
    {
        this->price=price1;
    }
    int getPrice()
    {
        return price;
    }
    void setPublication(string publication1)
    {
        this->publication=publication1;
    }
    string getPublication()
    {
        return publication;
    }
};
int main()
{
    lib obj;
    obj.setBookname("hello"); 
    obj.setBookpage(200);
    obj.setBookauthor("K V raman");
    obj.setPrice(650);
    obj.setPublication("Bharat Prakashan");
    cout<<obj.getBookname()<<endl;
    cout<<obj.getBookpage()<<endl;
    cout<<obj.getBookauthor()<<endl;
    cout<<obj.getPrice()<<endl;
    cout<<obj.getPublication()<<endl;
    return 0;
}
