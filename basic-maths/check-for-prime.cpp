#include <bits/stdc++.h>

using namespace std;

// A prime number is a number that is divisible by 1 and itself and
//  has exactly 2 "different" factor
//  1st: 1, 2nd: the number itself
int main()
{
    int n, count = {0};
    cin >> n;
    // n=9;
    for (size_t i = 1; i * i <= n; i++)
    {
        if ((n % i) == 0)
        {
            count++;
            if (n / i != i)
            {
                count++;
            }
        }
    }

    if (count == 2)
    {
        cout << n << " is a prime number.";
    }
    else
    {
        cout << n << " is not a prime number.";
    }
}