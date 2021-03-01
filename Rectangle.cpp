#include <iostream>
using namespace std;
int main()
{
    int test;
    int a, b, c, d;
    cin >> test;
    int step = 0;
    while (test--)
    {
        cin >> a >> b >> c >> d;
        if (a == b && c == d)
        {
            cout << "YES" << endl;
        }
        else if (a == c && b == d)
        {
            cout << "YES" << endl;
        }
        else if (a == d && b == c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}