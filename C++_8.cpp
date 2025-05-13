#include<iostream>
using namespace std;
int main()
{
    int number,sum;
    cout<<("Give a number :");
    cin>>number;
    sum=number;
    while (number != 0)
        {cout<<("Give a number : ");
        cin>>number;
        sum+=number;}
    cout<<("The sum of the numbers is :")<<sum;
    return 0;
}
