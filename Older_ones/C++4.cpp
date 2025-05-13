#include <iostream>
using namespace std;
int main()
{
    float first,second,third,sum,gin,mo;
    cout<<"Δώσε τον πρώτο αριθμό:";
    cin>>first;
    cout<<"Δώσε τον δεύτερο αριθμό:";
    cin>>second;
    cout<<"Δώσε τον τρίτο αριθμό:";
    cin>>third;
    sum = first + second + third;
    gin = first * second * third;
    mo = (first + second + third)/3;
    cout << "The sum of "<<first<<","<<second<<","<<third<<" is "<<sum<<endl;
    cout << "The gin of "<<first<<","<<second<<","<<third<<" is "<<gin<<endl;
    cout << "The mo of "<<first<<","<<second<<","<< third <<" is "<<mo<<endl;
    return 0;
}