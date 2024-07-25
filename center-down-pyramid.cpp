#include <bits/stdc++.h>
using namespace std;
/**
 *      | ********* | i=1, j=10,
 *      |  *******  | i=2, j=10
 *      |   *****   | i=3, j=10
 *      |    ***    | i=4, j=10
 *      |     *     | i=5, j=10
 */
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n * 2; j++)
        {
            if (j >= i && j <= (n * 2) - i) // imp
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