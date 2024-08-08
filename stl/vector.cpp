#include <bits/stdc++.h>
using namespace std;

//for vectors, singly linked list is maintained
//insertion is costly
int main()
{
    // Initialize a vector
    vector<int> v = {};
    // add elements in the end of the vector
    v.push_back(1);
    v.push_back(2);

    // another way of adding the element
    // emplace_back is faster than push_back
    v.emplace_back(3);
    v.emplace_back(4);

    // Repeating elements in a vector while initializing
    vector<int> a(2, 100);

    // iterators
    vector<int>::iterator b = a.begin();

    for (size_t i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }

    // insertion
    vector<int> c(2, 100);
    c.insert(c.begin(), 4); // Insert at a specific location
    cout << c[0];
    
    //Erase element
    //to erase element at n position, n+1 should be given
    c.erase(c.begin()+1);

    // Clean, empty vector
    c.clear();

    //Check if empty
    c.empty();

    //Swapping the vector
    c.swap(a);

    //Removeing element from end
    c.pop_back();
}