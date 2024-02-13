#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> d = {3, 4, 2, 5, 6, 5};
    d.pop_back();
    d.push_front(9);
    d.pop_front();
    d.push_back(8);

    for (int num : d)
        cout << num << endl;

    vector<float>::iterator it;
    for (it = d.begin(); it != d.end(); d++)
    {
        cout << *it << endl;
    }

    vector<float>::reverse_iterator rit;
    for (rit = d.rbegin(); rit != d.rend(); d--)
    {
        cout << *rit << endl;
    }

    return 0;
}