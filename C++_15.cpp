#include <iostream>
using namespace std;
class Account
{
private:
float balance;
public:
Account()
{
balance = 0;
}
void withdrawn(float money)
{
if(money <= balance)
balance = balance - money;
else
cout<<"�� ���� �������� ���������� �� ������ !" <<endl;
}
void deposit(float money)
{
balance+=money;
}
float getBalance()
{
return balance;
}
};
main()
{
Account ac;
ac.deposit(100.0);
cout<<"������ ���� �����������:"<<ac.getBalance()<<endl;
ac.withdrawn(70.0);
cout<<"������ ���� �����������:"<<ac.getBalance()<<endl;
}
