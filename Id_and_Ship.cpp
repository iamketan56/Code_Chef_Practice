#include <iostream>
using namespace std;
int main()
{
    int test, rem;
    cin >> test;
    char a;
    while (test--)
    {
        cin >> a;

        if (a == 'B' || a == 'b')
        {
            cout << "BattleShip" << endl;
        }

        if (a == 'C' || a == 'c')
        {
            cout << "Cruiser" << endl;
        }

        if (a == 'D' || a == 'd')
        {
            cout << "Destroyer" << endl;
        }
        if (a == 'F' || a == 'f')
        {
            cout << "Frigate" << endl;
        }
    }
}