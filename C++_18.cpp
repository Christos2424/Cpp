#include <iostream>
#include <cstring>
using namespace std;

struct Alien
{
    char name[80];
    int eyes;
};

int main()
{
    Alien alein1,alein2;
    cout<<"What is the name of the alien ?";
    cin>>alein1.name;
    cout<<"Give the number of eyes :";
    cin>>alein1.eyes;
    strcpy(alein2.name,"Michaelos");
    alein2.eyes = 7;
    cout<<"name :"<<alein1.name<<"\n";
    cout<<"eyes :"<<alein1.eyes<<"\n";
    cout<<"name :"<<alein2.name<<"\n";
    cout<<"eyes :"<<alein2.eyes<<"\n";

    return 0;
}
