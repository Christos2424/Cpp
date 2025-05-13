#include <iostream>
using namespace std;
int main()
{
float b1,b2,b3,mo;
cout << "Δώσε τρεις βαθμούς: ";
cin >> b1 >> b2 >> b3;
if (b1>=b3 && b2>=b3)
mo=(b1+b2)/2;
else if (b2>=b1 && b3>=b1)
mo=(b2+b3)/2;
else
mo=(b1+b3)/2;
cout << "Ο μέσος όρος είναι " << mo << endl;
return 0;
}
