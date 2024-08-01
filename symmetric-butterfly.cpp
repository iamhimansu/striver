#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for (ssize_t i = 1; i <= n; i++)
    {
        // print star
        for (ssize_t j = 1; j <= i; j++)
        {
            cout << '*';
        }

        // print space
        for (ssize_t j = 1; j <= 2 * (n - i); j++)
        {
            cout << ' ';
        }

        // print star
        for (ssize_t j = 1; j <= i; j++)
        {
            cout << '*';
        }

        cout << endl;
    }
    n = n - 1;
    for (ssize_t i = 1; i <= n; i++)
    {
        for (ssize_t j = 1; j <= n - (i - 1); j++)
        {
            cout << '*';
        }

        for (ssize_t j = 1; j <= 2 * i; j++)
        {
            cout << ' ';
        }
        for (ssize_t j = 1; j <= n - (i - 1); j++)
        {
            cout << '*';
        }

        cout << endl;
    }
}