/* Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/
#include <iostream>
using namespace std;
class bank
{   
    string name, acctype;
    int accno, bal;
public:
    void assign(string accountholdername, int accnumber, string accounttype, int balance)
    {
        name = accountholdername;
        acctype = accounttype;
        accno = accnumber;
        bal = balance;
    }
    void deposite(int amount)
    {
        if (amount > 0)
        {
            bal += amount;
            cout << "deposited amount is :" << amount << endl;
        }
        else
        {
            cout << "Not deposited";
        }
    }
    void withdrow(int amount)
    {
        if (amount <= bal && amount > 0)
        {
            bal -= amount;
            cout << "Withdrow Amount is:" << amount << endl;
        }
        else
        {
            cout << "Sufficient balance" << endl;
        }
    }
    void display()
    {
        cout << "Account Holder Name Is:" << name << endl;
        cout << "Account Number Is:" << accno << endl;
        cout << "Account Type Is :" << acctype << endl;
        cout << "Account Balance Is :" << bal << endl;
    }
};
int main()
{
    bank obj;
    obj.assign("Kalpesh C Baldha", 12123635, "saving", 50000);
    obj.display();
    obj.deposite(1000);
    obj.withdrow(1000);
    obj.display();
}