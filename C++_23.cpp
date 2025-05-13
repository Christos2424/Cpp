#include <iostream>
#include <cstring>
using namespace std;

class BankAccount
{
    private:
        string owner_name;
        float balance;
    public:
        BankAccount()
        {}
        BankAccount(string owner_name1,float balance1)
        {
            owner_name = owner_name1;
            balance = balance1;
        }
    void  Withdraw(float money)
    {
        balance -= money;
        cout<<"Withdraw amount"<<money<<"success"<<endl;
    }

    void Deposit(float money)
    {
        balance += money;
        cout<<"Deposit amount"<<money<<"success"<<endl;
    }
    void showdetails()
    {
        cout<<"Name: "<<owner_name<<endl;
        cout<<"Remaining: "<<balance<<endl;
    }
};

int main()
{
BankAccount A("Mike",1000);
BankAccount B("Chris",2000);

A.showdetails();
B.showdetails();
return 0;
}
