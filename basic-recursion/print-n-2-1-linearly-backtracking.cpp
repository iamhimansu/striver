#include<bits/stdc++.h>
using namespace std;

void n2OneBacktrack(int n, int o){
    if(o==n){
        return;
    }

    n2OneBacktrack(n, ++o);
    cout << o << " ";
}

int main(){
    int n;
    cin >> n;

    n2OneBacktrack(n, 0);
}