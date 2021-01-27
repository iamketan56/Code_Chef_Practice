#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int evencount = 0;
    int oddcount = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }

    if (evencount > oddcount)
    {
        cout << "READY FOR BATTLE" << endl;
    }
    else
    {
        cout << "NOT READY" << endl;
    }
}