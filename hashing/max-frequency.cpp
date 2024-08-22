#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n] = {0, n};

    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mpp;

    for (size_t i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int max = 0;
    int num = 0;
    for (auto it : mpp)
    {
        if (it.second > max)
        {
            max = it.second;
            num = it.first;
        }
    }

    cout << "Maximum frequency is of the number: "<< num;
}