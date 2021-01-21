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
        int sum = 0;
        cin >> number;
        sum += number % 10;
        while (number != 0)
        {
            temp = number % 10;
            number = number / 10;
        }
        sum += temp;
        cout << sum << endl;
        n--;
    }
    return 0;
}
