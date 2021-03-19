#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> arr;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        arr.push_back(d);
    }
    sort(arr.begin(), arr.begin() + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * (i + 1);
    }
    cout << *max_element(arr.begin(), arr.end());
    return 0;
}
