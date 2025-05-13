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
    Alien *alien1,*alien2;
    alien1 = new Alien();
    cout<<"Give the name of the alien : "<<"\n";
    cin>>alien1->name;
    cout<<"Give the number of eyes : "<<"\n";
    cin>>alien1->eyes;
    alien2 = new Alien();
    cout<<"Give the name of the alien : "<<"\n";
    cin>>alien2->name;
    cout<<"Give the number of eyes : "<<"\n";
    cin>>alien2->eyes;
    cout<<"name : "<<alien1->name<<"\n";
    cout<<"eyes : "<<alien1->eyes<<"\n";
    cout<<"name : "<<alien2->name<<"\n";
    cout<<"eyes : "<<alien2->eyes<<"\n";
    delete alien1;
    delete alien2;
    return 0;
}
