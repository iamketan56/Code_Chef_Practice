#include <iostream>
using namespace std;
bool checkprime(int n)
{
    if (n == 1)
    {
        return false;
    }
    int i;
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int test, rem;
    cin >> test;
    int num;

    while (test--)
    {
        cin >> num;
        if (checkprime(num))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}