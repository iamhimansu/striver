#include <bits/stdc++.h>
using namespace std;

//time complexity: O(n)
//space complexity: O(n)
void nameNtimes(string name, int times, int n = 0){
    if(n == times){
        return;
    }
    cout << name << endl;
    nameNtimes(name, times, ++n);
}

int main(){
    string name = {};
    int times = {};
    cin >> name >> times;
    nameNtimes(name, times);
}
