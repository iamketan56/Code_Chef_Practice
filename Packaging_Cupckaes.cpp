
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, num;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> num;
        cout << (num / 2) + 1 << endl;
    }
    return 0;
}