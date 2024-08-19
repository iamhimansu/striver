#include <bits/stdc++.h>
using namespace std;

int sumUptoN(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sumUptoN(n - 1);
}

int main()
{
    int n;

    cin >> n;

    int sum = sumUptoN(3);

    cout << "Sum up to " << n << " is: " << sum;
}