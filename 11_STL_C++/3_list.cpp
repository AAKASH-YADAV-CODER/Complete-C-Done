#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {3, 4, 56, 6, 4, 3};
    l.pop_front();
    l.push_front(5);
    l.push_back(89);
    l.push_back(9);
    l.pop_back();

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