#include <bits/stdc++.h>
using namespace std;

int main()
{

    char start = 'A';
    int n = 4;
    int k = (2 * n) - 1;

    for (size_t i = 1; i <= n; i++)
    {
        start = 'A';
        for (int j = 1; j <= k; j++)
        {
            if (j > n - i && j < n + i)
            {
                cout << start;
                if(j > k/2){
                start--;
                } else {
                    start++;
                }
            }
            else
            {
                cout << ' ';
            }

        }
        cout << endl;
    }
}