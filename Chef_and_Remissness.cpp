
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        long long int A, B;
        cin >> A >> B;
        sum = A + B;
        cout << max(A, B) << " " << sum << endl;
    }
    return 0;
}