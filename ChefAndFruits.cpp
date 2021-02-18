#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    int a, o, k;
    while (test--)
    {
        cin >> a >> o >> k;
        int d = abs(a - o);
        if (k >= d)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << d - k << endl;
        }
    }
}