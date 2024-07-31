#include <bits/stdc++.h>
using namespace std;

int main()
{
    char start = 'A';
    int end = 5;

    for (char i = start; i < start + end; i++)
    {
        for (size_t j = start; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}