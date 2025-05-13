#include <iostream>
#include <cstring>
using namespace std;
class Menuitem
{
private:
    string name;
    string discription;
    int price;
public:
    Menuitem(string name,string discription,int price):name(name),discription(discription),price(price){}
    int getInfo()
    {
        return price;

    }
};

class Appetizer:public Menuitem
{
public:
Appetizer(string name,string discription,int price):Menuitem(name,discription,price)
{

}




};
