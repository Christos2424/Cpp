#include <iostream>
using namespace std;
int main()
{
    char count;
    cout <<"Give a something :";
    cin >> count;
    switch (count){
        case 'h':
        cout<<"hello";
        break;
        case '2':
        cout<<"it is : 2";
        break;
        case 'b':
        cout<<"bye bye";
        break;
    }
    return 0;
}