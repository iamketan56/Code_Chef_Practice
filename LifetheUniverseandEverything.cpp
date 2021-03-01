#include <iostream>
using namespace std;

int main()
{
    // your code goes here

    while (true)
    {
        int i;
        cin >> i;
        if (i == 42)
        {
            break;
        }
        else
        {
            cout << i << endl;
        }
    }
    return 0;
}