#include <iostream>
using namespace std;

int main()
{
    int test;
    int number;
    cin >> test;
    while (test != 0)
    {
        cin >> number;
        int fact = 1;
        while (number != 0)
        {
            fact = fact * number;
            number--;
        }
        cout << fact << endl;
        test--;
    }
}
