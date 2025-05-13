#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i,number;
    string a[15],name;
    for (i=0; i<15; i++)
    {
        cout<<("Give your name : ");
        cin>>name;
        a[i]=name;
    }
    cout<<("Give a number from 0 to 14 :");
    cin>>number;
    cout<<a[number];

   
}
