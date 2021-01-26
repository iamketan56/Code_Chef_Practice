#include <iostream>
#include <algorithm>

using namespace std;
int main()
{

    int test;
    cin >> test;
    long long int a[3];
    while (test != 0)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 3);
        cout << a[1] << endl;
        test--;
    }
}