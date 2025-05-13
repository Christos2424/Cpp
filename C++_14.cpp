#include <iostream>
#include <cstring>
using namespace std;
class person
{
private:
    char name[30];
    int age;
public:
    void setData(char name1[],int age1)
    {
        strcpy(name,name1);
        age=age1;
    }
    void printData()
    {
        cout<<"The name of the person is :"<<name<<endl;
        cout<<"The age of the person is :"<<age<<endl;
    }
};//τέλος κλάσης

int main() {
person p;
p.setData("PETRANJAMES",25);
p.printData();
return 0;
}
