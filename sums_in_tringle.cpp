#include <iostream>
#include <algorithm>
#include <array>
using namespace std;
int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int n;
        cin >> n;
        int num[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cin >> num[i][j];
            }
        }
        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = 0; j <= i; j++)
            {
                num[i][j] = num[i][j] + max(num[i + 1][j], num[i + 1][j + 1]);
            }
        }
        cout << num[0][0] << endl;
    }
}