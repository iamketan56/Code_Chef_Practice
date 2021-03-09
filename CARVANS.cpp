#include <iostream>
#include <vector>
using namespace std;
int countmaxspeed(int a[], int size)
{
    int countofmax = 1;
    if (size == 1)
    {
        return countofmax;
    }
    else
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                countofmax++;
            }
            else
            {
                a[i + 1] = a[i];
            }
        }
    }
    return countofmax;
}
int main()
{
    int test;
    scanf("%d", &test);
    int no_of_car;
    while (test--)
    {
        scanf("%d", &no_of_car);
        int a[no_of_car];
        for (int i = 0; i < no_of_car; i++)
        {
            scanf("%d", &a[i]);
        }
        cout << countmaxspeed(a, no_of_car) << endl;
    }
}