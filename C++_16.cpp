#include <iostream>
using namespace std;
class Account
{
private:
    float balance;
public:
    Account()//συνάρτηση χωρίς ορίσματα
    {
        balance=0;
    }
    Account(float balance1)//συνάρτηση εγκατάστασης με όρισμα
    {
        balance=balance1;
    }
    void withdraw(float money)
    {
        if(money<=balance)
            balance=balance-money;
        else
            cout<<"Το ποσό ανάληψης υπερβαίνει το τρέχον!"<<endl;
    }
    void deposit(float money)
    {
        balance+=money;
    }
    float getBalance()
    {
        return balance;
    }
    void addBalance(Account x,Account y)
    {
        balance = x.balance + y.balance;
    }
};
main()
{
    Account ac1(100.0),ac2(70.0),ac3;

    ac3.addBalance(ac1,ac2);
        cout <<"Τρεχόν ποσό λογαριασμού ac1:"<< ac1.getBalance()<<endl;
        cout <<"Τρεχόν ποσό λογαριασμού ac2:"<< ac2.getBalance()<<endl;
        cout <<"Συνολικό ποσό λογαριασμών:"<<ac3.getBalance()<<endl;
}
