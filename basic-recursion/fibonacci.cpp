#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n, int i, int f, int s)
{
    if (i++ == n)
    {
        return;
    }
    cout << f + s << " ";
    int sum = f + s;
    f = s;
    s = sum;
    fibonacci(n, i++, f, s);
}
int main()
{
    int n;
    cin >> n;
    int first = 0;
    int second = 1;

    // TC: O(n)
    // SC: O(n)
    //  0, __1, __1, 2, 3 5 8 13
    cout << first << " " << second << " ";
    for (size_t i = 1; i <= n; i++)
    {
        int sum = first + second;
        first = second;
        cout << sum << " ";
        second = sum;
    }
    first = 0;
    second = 1;

    cout << "\n";
    cout << first << " " << second << " ";

    fibonacci(n, 0, first, second);
}