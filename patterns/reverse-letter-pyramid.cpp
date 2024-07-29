#include <bits/stdc++.h>
using namespace std;
int main()
{
    char start = 'A';
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (char j = start; j <= start + n; j++){
            if (j <=(start + n) - i)
            {
                cout << j;
            }
    
        }
        cout << endl;

    }
}