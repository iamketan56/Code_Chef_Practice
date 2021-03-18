#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n] = {0};
    int queries;
    cin >> queries;
    int start, end;
    while (queries--)
    {
        cin >> start >> end;
        a[start]++;
        if (end + 1 < n)
        {
            a[end + 1]--;
        }
    }
    for (int i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}