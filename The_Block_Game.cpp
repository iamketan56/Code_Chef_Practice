#include <iostream>
using namespace std;
int main()
{
    int test, rem;
    cin >> test;
    int num;
    int orignal;
    while (test--)
    {
        int reversenum = 0;
        cin >> num;
        orignal = num;
        while (num != 0)
        {
            rem = num % 10;
            reversenum = reversenum * 10 + rem;
            num = num / 10;
        }
        if (orignal == reversenum)
        {
            cout << "wins" << endl;
        }
        else
        {
            cout << "loses" << endl;
        }
    }
}