#include <bits/stdc++.h>
using namespace std;

// for lists, double linked list is maintained
// insertion is cheap
//Similar to vectors
int main()
{
    list<int> l; //initialize
    l.push_front(2); //add element to front
    l.push_back(3); //add element to end

    l.emplace_front(2); //add element to front
    l.emplace_back(3); //add element to end

    list<int>::iterator li = l.begin();

    cout << *(li++) << endl;
}