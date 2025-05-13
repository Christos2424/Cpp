#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float timi,fpa,telik_timi;
    cout<<"Dwse thn timh tou proiontos";
    cin>>timi;
    fpa=0.23;
    telik_timi=timi*fpa+timi;
    cout<<"H telikh timh einai:"<<fixed<<setprecision(2)<<telik_timi;
    return 0;
}
