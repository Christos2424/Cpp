#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int code,qty;
    float price,total;
    cin>>code>>qty;
    switch(code){
        case 1:
        price=4.0;
        break;
        case 2: case 3: case 4:
        price=4.5;
        case 5: case 10: case 15:
        price=4.5;
        break;
        case 7: case 9:
        price=2.5;
        break;
        case 12:
        price=1.5;
        break;
        default:
        cout<<"Wrong input"<<endl;
        }
        total=price*qty;
        cout<<fixed<<setprecision(2)<<total;
        return 0;
}
