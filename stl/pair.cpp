#include <bits/stdc++.h>
using namespace std;

pair<int,int> createPair(int a, int b)
{
    return {a, b};
}
int main()
{
    pair<int, int> p = createPair(1, 5);

    cout << p.first << p.second;

}