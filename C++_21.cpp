#include <iostream>
#include <cstring>
using namespace std;

struct Alien
{
    char name[80];
    int eyes;

};
void givename(Alien *alien,char buffer[80]);
char * takename(Alien *alien);
void giveeyes(Alien *alien, int buffer);
int  takeeyes(Alien *alien);
void printAlien(Alien *alien);
char tmp_name[50];
int tmp_eyes;


int main()
{
    Alien *alein1,*alein2,*alein3;
    alein1 = new Alien();
    givename(alein1,"mike");
    giveeyes(alein1,23);
    alein2 = new Alien();
    cout<<"Give name : "<<"\n";
    cin>>tmp_name;
    cout<<"Give number of eyes : "<<"\n";
    cin>>tmp_eyes;
    givename(alein2,tmp_name);
    giveeyes(alein2,tmp_eyes);
    alein3 = new Alien();
    cout<<"Give name : "<<"\n";
    cin>>alein3->name;
    cout<<"Give number of eyes : "<<"\n";
    cin>>alein3->eyes;
    printAlien(alein1);
    printAlien(alein2);
    printAlien(alein3);
    delete alein1;
    delete alein2;
    delete alein3;
    return 0;
}
void givename(Alien  *alien, char buffer[80])
{
    strcpy(alien->name,buffer);
}
char * takename(Alien *alien)
{
    return alien->name;
}
void giveeyes(Alien *alien,int buffer)
{
    alien->eyes = buffer;
}
int takeeyes(Alien *alien)
{
    return alien->eyes;
}
void printAlien(Alien *alien)
{
    cout<<"name : "<<takename(alien)<<"\n";
    cout<<"eyes : "<<takeeyes(alien)<<"\n";
}
