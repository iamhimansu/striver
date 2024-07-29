#include <bits/stdc++.h>
using namespace std;

/**
 * Down pyramid not done
 */
int main()
{
    int n = 5;
    for (int i = 1, k = n * 2; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if ((i <= n) && (j > (n - i) && j < (n + i)) || (i > n && (j > (n - (k - i)) && j <= (2 * (k - i) - 1))))
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