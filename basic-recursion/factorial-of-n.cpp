#include <bits/stdc++.h>
using namespace std;

//TC: O(n)
//SC: O(n)
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int main()
{
    int n;

    cin >> n;

    cout << "Factorial of n is :" << fact(n);
}