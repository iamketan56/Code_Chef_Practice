#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    int a, b, c;
    while (test--)
    {
        cin >> a >> b >> c;
        if (a + b + c == 180)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}