#include <bits/stdc++.h>
using namespace std;

// time complexity: O(n)
// space complexity: O(n)
void one2NBacktrack(int n, int o){
    if(o == 0){
        return;
    }
    one2NBacktrack(n, o-1);
    cout << o << " "; // notice this line will be executed after the recursion is completed
}

int main(){
    int n;
    cin >> n;

    one2NBacktrack(n, n);
}