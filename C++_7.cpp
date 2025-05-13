#include<iostream>
using namespace std;
int main()
{
    int number,sum,i;
    sum=0;
    cout<<("Give a number : ");
    cin>>number;
    for (i=0; i<=number; i++)
    {
        sum+=i;
    }
    cout<<("The total is : ")<<sum;
    return 0;
}
