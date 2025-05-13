#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<("Give a number :");
    cin>>number;
    while(number <0)
    {
        cout<<("Give a number :");
        cin>>number;
    }
}
