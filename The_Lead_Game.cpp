#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int round;
    int player1 = 0, player2 = 0;
    int p1, p2;
    cin >> round;
    int lead = 0;
    int temp = 0;
    int winner = 2;
    while (round != 0)
    {
        cin >> p1 >> p2;
        player1 += p1;
        player2 += p2;
        temp = abs(player1 - player2);
        if (temp > lead)
        {
            lead = temp;
            if (player1 > player2)
            {
                winner = 1;
            }
            if (player2 > player1)
            {
                winner = 2;
            }
        }
        round--;
    }
    cout << winner << " " << lead;
}