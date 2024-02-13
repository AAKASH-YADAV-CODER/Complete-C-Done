#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> q = {3, 4, 5, 3, 2, 2};
    q.push(4);
    q.pop();

    for (int num : q)
        cout << num << endl;

    vector<float>::iterator it;
    for (it = q.begin(); it != q.end(); q++)
    {
        cout << *it << endl;
    }

    vector<float>::reverse_iterator rit;
    for (rit = q.rbegin(); rit != q.rend(); q--)
    {
        cout << *rit << endl;
    }
    return 0;
}

// this we only do push and pop bs and some more function like empty size emplace swap etc