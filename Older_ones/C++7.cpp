#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Type the year: ";
    cin >> year;
    if (year % 4 != 0)
    {
        cout << "This is an ordinary year.";
    }
    else if (year % 100 != 0)
    {
        cout << "This year is bisective.";
    }
    else if (year % 400 != 0)
    {
        cout << "This is an ordinary year.";
    }
    else
    {
        cout << "This year is bisective.";
    }
    return 0;
}