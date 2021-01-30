#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    int notes[] = {100, 50, 10, 5, 2, 1};

    int num;
    cin >> t;
    while (t != 0)
    {
        int counter = 0;
        cin >> num;

        for (int i = 0; i < 6; i++)
        {
            if (num >= notes[i])
            {
                counter = counter + num / notes[i];
                num = num % notes[i];
            }
        }
        cout << counter << endl;
        t--;
    }
}