#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> m;
    m.insert(pair<int, string>(1, "Aakash yadav"));
    m.insert(pair<int, string>(2, "tanash yadav"));
    m.insert(pair<int, string>(3, "vikash yadav"));
    m.insert(pair<int, string>(4, "ash yadav"));

    map<int, string>::iterator it;
    it = m.find(2);
    cout << it->first << " " << it->second << endl;

    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}