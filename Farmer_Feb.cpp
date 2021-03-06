#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n)
{

    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int nextPrime(int N)
{

    if (N <= 1)
        return 2;

    int prime = N;
    bool found = false;

    while (!found)
    {
        prime++;

        if (isPrime(prime))
            found = true;
    }

    return prime;
}

int main()
{

    int t;
    long long int n;
    cin >> t;
    while (t--)
    {
        int first, second, third;
        cin >> first >> second;
        int res = nextPrime(first + second);
        cout << res - (first + second) << endl;
    }
}