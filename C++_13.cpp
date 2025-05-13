#include <iostream>
using namespace std;
class person
{
private:
char name[30];
int age;
public:
void readData()
{
cout<<"Enter name:";
cin>>name;
cout<<"Enter age:";
cin>>age;
}
void printData()
{
cout<<"The name of the person is "<<name<<endl;
cout<<"The age of the person is "<<age<<endl;
}
};//Τέλος κλάσης
int main()
{
person p1,p2;//δήλωση δύο αντικειμένων

p1.readData();//κλήση συνάρτησης για ορισμό δεδομένων
p1.printData();//κλήση συνάρτησης για εμφάνιση δεδομένων
p2.readData();
p2.printData();
}
