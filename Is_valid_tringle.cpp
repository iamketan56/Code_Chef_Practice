#include <bits/stdc++.h>
using namespace std;
void IsAreaGreaterThenZero(int a, int b, int c)
{

    if (a + b <= c || a + c <= b || b + c <= a)
        cout << "NO";
    else
        cout << "YES";
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    IsAreaGreaterThenZero(a, b, c);
}