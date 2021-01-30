#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    int price[] = {2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
    int p;
    int num;
    cin >> t;
    int i = 11;
    while (t != 0)
    {
        int counter = 0;
        cin >> p;

        for (int i = 0; i < 12; i++)
        {
            if (p >= price[i])
            {
                counter = counter + p / price[i];
                p = p % price[i];
            }
        }

        cout << counter << endl;
        t--;
    }
}