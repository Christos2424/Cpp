#include "rain.h"
#include "Storm.h"
#include <iostream>
using namespace std;

Rain *rain;
Storm storm1,storm2,storm3,storm4,storm5;

void printStorm(Storm storm);
void printRain(Rain *rain);
void updateRain(double db1,double db2);
int main()
{
    system("cls");
    rain = new Rain();

    storm1 = Storm(1.1,1.1);
    storm2 = Storm(2.2,2.2);
    storm3 = Storm(3.3,3.3);
    storm4 = Storm(4.4,4.4);
    storm5 = Storm();

    cout<<"Arithmitiki Antikeimenwn \n";
    cout<<"Ektiposi\n";
    printStorm(storm1);
    printStorm(storm2);
    printStorm(storm3);
    printStorm(storm4);

    storm5 = storm1 + storm2 + storm3 + storm4;

updateRain(storm5.getProtos(),storm5.getDefteros());
    cout<<"Prosthesi\n";
    printRain(rain);

    storm5 = storm1 - storm2 - storm3 - storm4;

updateRain(storm5.getProtos(),storm5.getDefteros());
    cout<<"Afairesh\n";
    printRain(rain);
    storm5 = storm1 * storm2 * storm3 * storm4;

updateRain(storm5.getProtos(),storm5.getDefteros());
    cout<<"polaplasiasmos\n";
    printRain(rain);
    storm5 = storm1 / storm2 / storm3 / storm4;
updateRain(storm5.getProtos(),storm5.getDefteros());
    cout<<"diairesh\n";
    printRain(rain);
    printRain(rain);
    delete rain;
    return 0;
}
void printStorm(Storm storm)
{
    cout<<storm.getProtos()<<" "
<<storm.getDefteros()<<"\n";
}
void printRain(Rain *rain)
{
    cout<<rain->getProtos()<<" "<<rain->getDefteros()<<"\n";
}
void updateRain(double db1,double db2)
{
    rain->setProtos(db1);
    rain->setDefteros(db2);
}
