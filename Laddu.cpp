#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int no_of_activity;
        cin >> no_of_activity;
        string nation;
        cin >> nation;
        string activity;
        int rank;
        int laddus = 0;
        int bugs;
        for (int i = 0; i < no_of_activity; i++)
        {
            cin >> activity;
            if (activity == "CONTEST_WON")
            {
                cin >> rank;
                if (rank <= 20)
                {
                    laddus += 300 + 20 - rank;
                }
                else
                {
                    laddus += 300;
                }
            }
            else if (activity == "BUG_FOUND")
            {
                cin >> bugs;
                laddus += bugs;
            }
            else if (activity == "TOP_CONTRIBUTOR")
            {
                laddus += 300;
            }
            else
            {
                laddus += 50;
            }
        }
        if (nation == "INDIAN")
        {
            cout << laddus / 200 << endl;
        }
        else
        {
            cout << laddus / 400 << endl;
        }
    }
}
