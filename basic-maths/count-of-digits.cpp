#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = {}, count = 0;

    cin >> n;

    if (n == 0)
    {
        n = 1;
    }
    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    cout << "There are total (" << count << ") digits.";
}