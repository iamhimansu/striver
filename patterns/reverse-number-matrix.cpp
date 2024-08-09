#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = (2 * n) - 1;

    for (ssize_t i = 1; i <= k; i++)
    {
        int c = n;
        for (ssize_t j = 1; j <= k; j++)
        {
            cout << c;

            if (i <= n)
            {
                if (c > (n - i) + 1 && j < n)
                {
                    c--;
                }
                else if (j > k - i)
                {
                    c++;
                }
            }
            else
            {
                if (j < (k - i) + 1)
                {
                    c--;
                }
                else if (j >= i)
                {
                    c++;
                }
            }
        }
        cout << endl;
    }
}