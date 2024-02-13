#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s = {2, 3, 5, 6, 7, 45, 3};
    s.push(2);
    s.size();
    s.top();
    s.swap(3, 6);
    s.pop();

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