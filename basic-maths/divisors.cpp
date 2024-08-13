#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> divisors = {};
    // divisors of 16
    // 1, 2, 4, 8, 16
    //Time complexity = O(sqrt(n))
    for (ssize_t i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {

            divisors.emplace_back(i);
           // cout << i << " ";

            //check if the divisor is repeating
            //example: 4
            if ((n / i) != i)
            {
                divisors.emplace_back(n/i);
                //cout << n / i << " ";
            }
        }
    }
    //sorting the divisors
    //time complexity = O(log(n))
    sort(divisors.begin(), divisors.end());
    vector<int>::iterator it;
    //time complexity = O(n)
    for ( it = divisors.begin(); it < divisors.end(); it++)
    {
        cout << *it << " ";
    }
    //Overall time complexity
    //O(sqrt(n)) + O(nlog(n)) + O(n) = ~O(n)
    
}