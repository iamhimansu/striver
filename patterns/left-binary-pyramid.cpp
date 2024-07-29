#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int b = 1;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (j <= i)
            {
                cout << b;
            }
            else
            {
                cout << ' ';
            }
            b = !b;
        }
        cout << endl;
    }
}