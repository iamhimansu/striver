#include <bits/stdc++.h>
using namespace std;

void n2One(int n, int count = 0){
    if(n-count == 0){
        return;
    }
    cout << n-(count) << " ";
    n2One(n, ++count);
}
int main(){
    int n;
    cin >> n;

    n2One(n);
}