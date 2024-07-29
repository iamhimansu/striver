#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, k = 0;
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                cout << k + j;
            }
            
                cout << ' ';
            
        }
        k += i;
        cout << endl;
    }
}