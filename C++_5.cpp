#include<iostream>
using namespace std;
int main()
{
    char input;
    cout<<"Give your input :";
    cin>>input;
    if ((input=='n')||(input=='N'))
    {
        cout<<("No");
    }
    else if ((input=='y')||(input=='Y'))
    {
        cout<<("Yes");
    }
    else
    {
        cout<<("Wrong input");
    }
    return 0;
}
