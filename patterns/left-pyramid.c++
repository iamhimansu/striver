#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        // for (int j = 0; j < 5; j++)
        for (int j = 0; j < i; j++) // optimization
        {
            // if (j < i)
            //{
            cout << "*";
            //}
        }
        cout << endl;
    }
}