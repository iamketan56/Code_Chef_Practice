#include <iostream>
using namespace std;
int main()
{
    int input;
    cin >> input;
    int base;
    while (input--)
    {
        int counter = 0;
        cin >> base;
        while (base > 2)
        {
            counter += (base - 2) / 2;
            base = base - 2;
        }
        cout << counter << endl;
    }
}