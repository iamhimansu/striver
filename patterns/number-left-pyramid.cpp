#include <bits/stdc++.h>
using namespace std;
int main()
{
    /**
     *  1
        12
        123
        1234
        12345
     */
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }

        cout << endl;
    }
}