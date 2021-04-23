#include <iostream>
using namespace std;
void printorder(int a[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
}
void printrev(int a[])
{
    for (int i = 4; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
}
void rec_pattern(int n)
{
    int a[] = {1, 2, 3, 4, 5};
    n = n / 2;
    while (n--)
    {

        printorder(a);
        cout << endl;
        for (int i = 0; i < 5; i++)
        {
            a[i] = a[i] + 5;
        }
        printrev(a);
        cout << endl;
        for (int i = 0; i < 5; i++)
        {
            a[i] = a[i] + 5;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    rec_pattern(n);
}