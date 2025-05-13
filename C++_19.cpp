#include <iostream>
#include <cstring>
using namespace std;

struct Alien
{
    char name[80];
    int eyes;
};
void givename(Alien &alien,char buffer[80]);
char * takename(Alien &alien);
void giveeyes(Alien &alien, int buffer);
int * tameeyes(Alien &alien);
void printAlien(Alien &alien);

int main()
{
    Alien alein1,alein2;
    givename(alein1,"mike");
    giveeyes(alein1,23);
    givename(alein2,"chris");
    giveeyes(alein2,24);
    printAlien(alein1);
    printAlien(alein2);
    return 0;
}
void givename(Alien & alien, char buffer[80])
{
    strcpy(alien.name,buffer);
}
char * takename(Alien &alien)
{
    return alien.name;
}
void giveeyes(Alien &alien,int buffer)
{
    alien.eyes = buffer;
}
int takeeyes(Alien &alien)
{
    return alien.eyes;
}
void printAlien(Alien &alien)
{
    cout<<"name : "<<takename(alien)<<"\n";
    cout<<"eyes : "<<takeeyes(alien)<<"\n";

}
