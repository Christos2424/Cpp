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
};//����� ������
int main()
{
person p1,p2;//������ ��� ������������

p1.readData();//����� ���������� ��� ������ ���������
p1.printData();//����� ���������� ��� �������� ���������
p2.readData();
p2.printData();
}
