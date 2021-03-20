#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    long long int n;
    int sale[102];
    int maxprofit;
    int s, p, v;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> s >> p >> v;

            sale[i] = ((p / (s + 1)) * v);
        }

        maxprofit = sale[0];
        for (int i = 0; i < n - 1; i++)
        {
            if (sale[i + 1] > maxprofit)
            {
                maxprofit = sale[i + 1];
            }
        }
        cout << maxprofit << endl;
    }
}
