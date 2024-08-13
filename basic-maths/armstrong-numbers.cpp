#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Armstrong number
    // 371 = 3^3 + 7^3 + 1^3
    ssize_t n, dup, dup2, i = {0}, len = {0};

    cin >> n;

    dup = n;

    ssize_t ps = {0};

    while (n != 0)
    {
        n = n / 10;
        ++len;
    }

    dup2 = dup;

    while (i++ < len)
    {
        int rem = dup % 10;
        int pow = {1};
        for (ssize_t p = 1; p <= len; p++)
        {
            pow = pow * rem;
        }
        ps = ps + pow;
        dup = dup / 10;
    }
    if (dup2 == ps)
    {
        cout << dup2 << " : is an Armstrong number";
    }
    else
    {
        cout << dup2 << " : is not an Armstrong number";
    }
}