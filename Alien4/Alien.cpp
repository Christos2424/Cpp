#include "Alien.h"
#include <cstring>

Alien::Alien()
{
    setname("");
    seteyes(0.0);
}

Alien::Alien(char na[80],double ey)
{
    setname(na);
    seteyes(ey);
}
Alien::~Alien()
{
}

void Alien::setname(char na[80])
{
    strcpy(name,na);
}
char * Alien::getname()
{
    return name;
}
void Alien::seteyes(double ey)
{
    eyes=ey;
}
double Alien::geteyes()
{
    return eyes;
}
