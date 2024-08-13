#include <bits/stdc++.h>
using namespace std;

// GCD or HCF
// Greatest common divisor
// Highest common factor
// using recursion
// time complexity: O(log (fi) min (a, b))
int gcd(int n1, int n2)
{
    int maxNum = max(n1, n2);
    int minNum = min(n1, n2);

    if (n1 == 0)
    {
        return n2;
    }
    return gcd(maxNum % minNum, minNum);
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << "the GCD of " << n1 << " and " << n2 << " is " << gcd(n1, n2) << " using recursion." << endl;

    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
            n1 = n1 % n2;
        else
            n2 = n2 % n1;
    }
    if (n1 == 0) cout << "GCD is " << n2;
    else cout << "GCD  is " << n1;

}