#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a, int b)
{
    int hcf, temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
        cout << a << " " << b << endl;
    }
    hcf = a;
    return hcf;
}
int main()
{
    int test;
    long long int n1, n2;
    cin >> test;
    while (test--)
    {
        cin >> n1 >> n2;
        int hcf = gcd(n1, n2);
        cout << hcf << " " << (n1 * n2 / hcf) << endl;
    }
}