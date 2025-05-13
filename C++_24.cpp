#include <iostream>
#include <cstring>
using namespace std;
class Animal
{
    protected:
        string name;
    public:
        Animal(string name1)
        {
         name = name1;
        }
class Dog:public Animal{
   public:
    Dog(string name):Animal(name)}
};
