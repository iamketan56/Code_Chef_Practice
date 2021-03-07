#include <iostream>
#include <cstring>
using namespace std;
bool CheckLapindrom(string a)
{
    int length = a.length();
    if (length == 1)
    {
        return true;
    }
    int count1[1000] = {0};
    int count2[1000] = {0};

    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        count1[a[i] - 'a']++;

        count2[a[j] - 'a']++;
    }

    for (int i = 0; i < 1000; i++)
    {
        if (count1[i] != count2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string c = "";
        cin >> c;
        if (CheckLapindrom(c))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}