#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if ((a % 5 == 0 && a % 11 != 0) || (a % 5 != 0 && a % 11 == 0))
    {
        cout << "ONE";
    }
    else if (a % 5 == 0 && a % 11 == 0)
    {
        cout << "BOTH";
    }
    else
    {
        cout << "NONE";
    }
}