#include <iostream>
using namespace std;
int typeoftringle(int a, int b, int c)
{
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        return -1;
    }
    else
    {
        if (a == b && b == c)
        {
            return 1;
        }
        else if (a == b || b == c || c == a)
        {
            return 2;
        }
        else if (a != b && b != c && a != c)
        {
            return 3;
        }
        else
        {
            return -1;
        }
    }
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << typeoftringle(a, b, c);
}