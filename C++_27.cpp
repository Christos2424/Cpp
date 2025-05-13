#include <iostream>
#include <cstring>
using namespace std;
class Teacher
{
private:
    string name;
    string specialization;
public:

    Teacher(string name1,string specialization1);

        name = name1;
        specialization = specialization1;
       void displayInfo()
       {
        cout<<"Name: "<<name<<endl;
        cout<<"Specialization: "<<specialization<<endl;
       }

};
class Course:public Teacher
{
private:
    string title;
    Teacher teacher;
public:
};
