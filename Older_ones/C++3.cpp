#include <iostream>
using namespace std;
int main()
{   
    float i,plk,sum,number,gin;
    sum=0;
    gin=1;
    for (i=0; i<2; i++)
    {
        cout<<"Give a number :";
        if (number=0)
        {
            cout<<"wrong";
            i=0;
        }
        else
        {
            cin>>number;
            sum=sum+number;
            gin=gin*number;
            plk=gin/i;
        }
    }   
    cout<<"The sum of the numbers is "<<sum<<" The gin of the numbers is :"<<gin<<"The plk of the numbers is :"<<plk;
    return 0;
}