#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    char start = 'A';
    for (size_t i = 1; i <= n; i++)
    {
        start = 'A';
        start = start + (n - i);
        for (size_t j = 1; j <= n; j++)
        {
            if(j <= i){
                cout << start;
            } else{
                cout << ' ';
            }
            start++;
        }
        cout << endl;
    }
    
}