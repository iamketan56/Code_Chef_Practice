#include <bits/stdc++.h>
using namespace std;
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
        sort(a, a + num);
        cout << a[0] + a[1] << endl;
    }
}