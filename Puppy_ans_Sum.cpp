#include <iostream>
using namespace std;
int sum(int times, int num)
{
    if (times == 1)
    {
        int res = 0;
        for (int i = 1; i <= num; i++)
        {
            res += i;
        }
        return res;
    }
    else
    {
        int res = 0;
        for (int i = 1; i <= num; i++)
        {
            res += i;
        }
        return sum(times - 1, res);
    }
}
int main()
{
    int test, number, times;
    cin >> test;
    while (test--)
    {
        cin >> times >> number;
        cout << sum(times, number) << endl;
    }
}