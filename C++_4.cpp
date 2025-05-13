#include<iostream>
using namespace std;
int main()
{
    float hours,money,money_after_tax;
    cout<<"Give how many hours you worked in a week :";
    cin>>hours;
    money=hours*15;
    if (money>1000)
    {
        money_after_tax=money-money*0.13;
    }
    else
    {
        money_after_tax=money;
    }
    cout<<"The money you'll receive for your work is : "<<money_after_tax;
    return 0;

}
