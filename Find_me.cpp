#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int x, k;
    cin >> x >> k;
    int ele;
    for (int i = 0; i < x; i++)
    {
        cin >> ele;
        s.insert(ele);
    }
    if (s.count(k) > 0)
    {
        cout << "1";
    }
    else
    {
        cout << "-1";
    }
}