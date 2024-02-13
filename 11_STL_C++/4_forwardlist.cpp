#include <bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int> l = {2, 3, 21, 32, 4, 2};
    l.pop_front();
    l.push_front(3);

    for (int num : l)
        cout << num << endl;

    vector<float>::iterator it;
    for (it = l.begin(); it != l.end(); l++)
    {
        cout << *it << endl;
    }

    vector<float>::reverse_iterator rit;
    for (rit = l.rbegin(); rit != l.rend(); l--)
    {
        cout << *rit << endl;
    }
    return 0;
}