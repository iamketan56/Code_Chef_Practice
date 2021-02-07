#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    int basic;
    float hra, da;
    float gross = 1;
    cin >> test;
    while (test--)
    {
        cin >> basic;
        if (basic < 1500)
        {
            hra = 0.1 * basic;
            da = 0.9 * basic;
        }
        else
        {
            hra = 500;
            da = 0.98 * basic;
        }
        gross = basic + hra + da;
        cout << fixed << setprecision(2) << gross << endl;
    }
}