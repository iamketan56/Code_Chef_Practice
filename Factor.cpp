#include <bits/stdc++.h>
using namespace std;
void printFector(int n)
{
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
        }
    }
    cout << v.size();
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    int a;
    cin >> a;
    printFector(a);
}