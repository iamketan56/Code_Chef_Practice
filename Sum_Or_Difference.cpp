#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cin >> n1;
    cin >> n2;
    if (n1 > n2)
    {
        cout << n1 - n2 << endl;
    }
    else
    {
        cout << n1 + n2 << endl;
    }
}