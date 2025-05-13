#include <iostream>
using namespace std;
int main()
{
    float price,amount;
    cout <<"Give the amount that you bought :";
    cin >> amount;
    cout <<"Give the price of the product :";
    cin >> price;
    price = price * amount;
    if (amount > 100)
    {
        price = price - (price * 0.25);
    }
    else if ((amount >= 80)&&(amount <= 100))
    {
        price = price -(price * 0.15);
    }
    else if (amount < 20)
    {
        price = price * 1.10;
    }
    cout <<"The price is :"<<price;
    return 0;
}