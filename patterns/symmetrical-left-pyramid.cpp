#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    for (int i = 1, k = n * 2; i < k; i++)
    {
        for (int j = 1; j < k; j++)
        {
            if (j <= i && i <= n || (i > n && j <= (k - i)))
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