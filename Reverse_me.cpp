#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin >> s;
    vector<int> v;
    int ele;
    for (int i = 0; i < s; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}