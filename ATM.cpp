#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    int withdraw;
    float total;
    cin >> withdraw >> total;
    float charge = 0.50;

    if ((withdraw % 5 == 0) && (withdraw <= total - charge))
    {

        total = total - (withdraw + charge);
    }
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << total;
}