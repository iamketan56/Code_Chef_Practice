#include <iostream>
using namespace std;
int main()
{
    int n, k, c = 0, num;
    cin >> n >> k;
    while (n != 0)
    {
        cin >> num;
        if (num % k == 0)
        {
            c++;
        }

        n--;
    }
    cout << c;
}