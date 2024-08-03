#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    for (ssize_t i = 1; i <= n; i++)
    {
        // For stars
        for (ssize_t j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == n || j == n)
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}