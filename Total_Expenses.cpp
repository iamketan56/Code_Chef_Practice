#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    int quantity, price;
    while (test--)
    {
        double total = 0;

        cin >> quantity >> price;

        if (quantity > 1000)
        {
            total = (quantity - (quantity * 0.1)) * price;
        }
        else
        {
            total = quantity * price;
        }

        cout << fixed << setprecision(6) << total << endl;
    }
}