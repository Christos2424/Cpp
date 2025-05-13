#include<iostream>
using namespace std;
int main()
{
    int a[100],i;
    for (i=0; i<100; i++)
    {
        if (i%2==0)
            a[i]=1;
        else
            a[i]=0;
    }
    for (i=0; i<100; i++)
    {
        cout<<" "<<a[i];
    }
    return 0;
}
