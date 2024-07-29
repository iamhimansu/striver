#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for (size_t i = 1, k = 2 * n; i <= n; i++)
    {
        int p = i;
        for (size_t j = 1; j <= k; j++)
        {
            if (j <= i)
            {
                cout << j;
            }
            else if (j > (k - i))
            {
                cout << p--;
            }
            else
            {
                cout << ' ';
            }
        }
      
        cout << endl;
    }
}