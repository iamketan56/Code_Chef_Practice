#include <iostream>
using namespace std;

int sqrt(int n)
{
    int s = 0;
    int e = n;
    int ans;
    int mid;
    while (s <= e)
    {
        mid = (s + e) / 2;

        if (mid * mid == n)
        {
            ans = mid;
            break;
        }

        if (mid * mid < n)
        {
            s = mid + 1;
            ans = mid;
        }

        if (mid * mid > n)
        {
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int value, test;
    cin >> test;
    while (test != 0)
    {

        cin >> value;

        cout << sqrt(value) << endl;

        test--;
    }
}