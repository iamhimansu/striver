#include <bits/stdc++.h>
using namespace std;
int main()
{
    char start = 'A';
    int n = 5;

    for (size_t i = start; i <= start + n; i++)
    {
        for (char j = start; j <= start + n; j++)
        {
            if (j <= i)
            {
                cout << j;
            }
        }
        cout << endl;
    }
}