#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int l, int r){
    if(l>=r){
        return true;
    }
    if(s.at(l++) != s.at(r--)){
        return false;
    }
    return isPalindrome(s, l, r);
}
int main()
{
    string s;
    cin >> s;

    cout << isPalindrome(s, 0, s.size()-1);
}