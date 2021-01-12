#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> t;
    while (t != 0)
    {
        int temp = 0;
        cin >> n;
        while (n != 0)
        {
            temp += n % 10;
            n = n / 10;
        }
        cout << temp << endl;
        t--;
    }
}