#include <iostream>
using namespace std;
int main()
{
    int amount;
    char grammatosimo;
    float finalPrice;
    cout << "Type the amount of the grammatosima: ";
    cin >> amount;
    cout << "Type the kind of the grammatosimo: ";
    cin >> grammatosimo;
    if (grammatosimo == 'A')
    {
        finalPrice = amount * 0.70;
    }
    else if (grammatosimo == 'E')
    {
        finalPrice = amount * 0.23;
    }
    else if (grammatosimo == 'T')
    {
        finalPrice = amount * 0.15;
    }
    cout << "The final price you gotta pay is: " << finalPrice << "€.";
    return 0;
}