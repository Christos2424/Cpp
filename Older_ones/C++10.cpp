#include <iostream>
using namespace std;
int main()
{
    float price , amount;
    cout<<"Give the number of sms sent :";
    cin>>amount;
    if (amount <= 10)
    {
        price = 2*amount;
    }
    else if ((amount > 10)&&(amount <=60))
    {
        price = (amount-10)*1.5+(2*10);
    }
    else if ((amount >60)&&(amount <=160))
    {
        price =(amount-60)*1.2+(1.5*50)+(2*10);
    }
    else if (amount > 160)
    {
        price =(amount-160)+(100*1.2)+(1.5*50)+(2*10);
    }
    cout<<"The price is :"<<price;
    return 0;
}