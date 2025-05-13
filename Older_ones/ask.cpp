#include <iostream>
using namespace std;
int main()
{
    float price,amount,fpa;
    cout <<"Give the amount that you bought :";
    cin >> amount;
    cout <<"Give the price of the product :";
    cin >> price;
    price = price * amount;
    fpa = 0.24;
    price = price + (price * fpa);
    cout <<"The price is :"<<price;
    return 0;
}