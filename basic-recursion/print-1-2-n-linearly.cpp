#include <bits/stdc++.h>
using namespace std;

void one2N(int n, int count = 0){
    if(count == n){
        return;
    }
    cout << ++count << " ";
    one2N(n, count);
}
int main(){
    int n;
    cin >> n;

    one2N(n);
}