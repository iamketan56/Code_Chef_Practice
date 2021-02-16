#include <iostream>
using namespace std;
int main()
{
    int test;
    int num, dig, temp;
    cin >> test;
    while (test--)
    {
        cin >> num >> dig;
        temp = 0;
        while (dig != 0)
        {
            if (temp < num % dig)
                temp = num % dig;
            dig--;
        }
        cout << temp << "\n";
    }
}