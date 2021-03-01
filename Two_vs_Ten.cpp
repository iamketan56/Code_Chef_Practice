#include <iostream>
using namespace std;
int main()
{
    int test;
    int num;
    cin >> test;
    int step = 0;
    while (test--)
    {
        cin >> num;
        if (num % 10 == 0)
        {
            cout << "0" << endl;
        }
        else if (num % 5 == 0)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}