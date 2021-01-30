#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    int price[] = {2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
   
    int num;
    cin >> t;
   
    while (t != 0)
    {
        int counter = 0;
        cin >> num;

        for (int i = 0; i < 12; i++)
        {
            if (num >= price[i])
            {
                counter = counter + num / price[i];
                num = num % price[i];
            }
        }

        cout << counter << endl;
        t--;
    }
}
