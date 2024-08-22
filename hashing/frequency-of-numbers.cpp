#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n] = {0};

    for (size_t i = 0; i < n; i++)
        cin >> arr[i];

    // pre-compute
    map<int, int> mpp;

    for (size_t i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    map<int, int>::iterator it = mpp.begin();
    for (it = mpp.begin(); it != mpp.end(); it++)
    {
        cout << (*it).first << " -> " << (*it).second << "\n";
    }
}