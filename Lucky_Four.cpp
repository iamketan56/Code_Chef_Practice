#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        long long int number;
        long long int temp;
        int count = 0;
        cin >> number;
        while (number != 0)
        {
            temp = number % 10;
            if (temp == 4)
            {
                count++;
            }
            number = number / 10;
        }
        cout << count << endl;
        n--;
    }
    return 0;
}
