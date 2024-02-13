#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> s = {3, 2, 4, 5, 2, 2, 5, 3, 2};
    s.insert(2);
    s.erase(2);
    s.size();

    for (int num : s)
        cout << num << endl;

    vector<float>::iterator it;
    for (it = s.begin(); it != s.end(); s++)
    {
        cout << *it << endl;
    }

    vector<float>::reverse_iterator rit;
    for (rit = s.rbegin(); rit != s.rend(); s--)
    {
        cout << *rit << endl;
    }
    return 0;
}