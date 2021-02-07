#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    int hcf, temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;
    return hcf;
}
int main()
{
    int test;
    cin >> test;
    int num;
    while (test--)
    {
        cin >> num;
        int a[num - 1];
        for (int i = 0; i < num; i++)
        {
            cin >> a[i];
        }
        int res = gcd(a[0], a[1]);
        for (int i = 2; i < num; i++)
        {
            res = gcd(res, a[i]);
        }
        for (int i = 0; i < num; i++)
        {
            a[i] = a[i] / res;
            cout << a[i] << " ";
        }
        cout << endl;
    }
}