#include <iostream>
#include <cstring>
using namespace std;
class Car
{
    private:
        string brand;
        string model;
        int year;
    public:
        Car()
        {}
        Car(string brand1,string model1,int year1)
        {
            brand = brand1;
            model = model1;
            year = year1;
        }
        void showDetails()
        {
            cout<<"Brand:"<<brand<<endl;
            cout<<"Model:"<<model<<endl;
            cout<<"Year:"<<year<<endl;
        }
};
int main()
{
    Car c1("BMW","M4",2020);
    Car c2("TOYOTA","SUPRA",1989);
    Car c3("VOLKSWAGEN","BEETLE",1980);
    c1.showDetails();
    cout<<endl;
    c2.showDetails();
    cout<<endl;
    c3.showDetails();
    return 0;
}
