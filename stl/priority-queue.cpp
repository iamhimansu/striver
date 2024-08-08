// Max heap
// largest at top
#include <bits/stdc++.h>

using namespace std;

int main()
{

    // MAX HEAP
    priority_queue<char> pq;
    pq.push('z');
    pq.push('Z');
    pq.push('A');
    pq.push('a');

    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    cout << endl << "MIN-HEAP" << "<int, vector<int>, greater<int>>;" << endl;

    priority_queue<char, vector<char>, greater<char>> minHeap;

    minHeap.push('a');
    minHeap.push('A');
    minHeap.push('Z');
    minHeap.push('z');

    while (!minHeap.empty())
    {
        cout << minHeap.top() << endl;
        minHeap.pop();
    }
    
}