#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float first,second,third,fourth;
    first = 333;
    second = 777;
    third = 999;
    fourth = sqrt(first) +sqrt(second)+sqrt(third);
    cout << "The sum of the square roots is :"<<fourth;
    return 0;
}