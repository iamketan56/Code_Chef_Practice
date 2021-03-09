#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int test;
    cin >> test;
    int game;
    while (test--)
    {
        cin >> game;
        while (game--)
        {
            int I, N, Q;
            cin >> I >> N >> Q;
            int ans;
            if (!(N % 2))
            {
                ans = N / 2;
            }
            else
            {
                if (I == 1)
                {
                    if (Q == 2)
                    {
                        ans = N / 2 + 1;
                    }
                    else
                    {
                        ans = N / 2;
                    }
                }
                else
                {
                    if (Q == 1)
                    {
                        ans = N / 2 + 1;
                    }
                    else
                    {
                        ans = N / 2;
                    }
                }
            }
            cout << ans << "\n";
        }
    }
}
