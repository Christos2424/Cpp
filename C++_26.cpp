#include<iostream>
#include<cstring>
using namespace std;
class Employee
{
public:
    void displayRole(){
    cout<<"Employee";
    }
};
class Manager:public Employee
{
public:
    void displayRole(){
    cout<<"Manager";
    }
};
int main()
{
Manager manager;
manager.displayRole();
return 0;
}

