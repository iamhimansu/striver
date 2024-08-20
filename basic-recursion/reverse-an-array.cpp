#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &a, int l, int r)
{
    if (l >= r)
    {
        return;
    }
    swap(a[l++], a[r--]);
    reverseArray(a, l, r);
}
int main()
{
    vector<int> array;
    int n;
    for (size_t i = 1; i <= 5; i++)
    {
        cin >> n;
        array.emplace_back(n);
    }

    for (auto a : array)
    {
        cout << a << " ";
    }

    reverseArray(array, 0, 4);

    cout << "\n"
         << "Reverse array " << "\n";
    for (auto a : array)
    {
        cout << a << " ";
    }
}