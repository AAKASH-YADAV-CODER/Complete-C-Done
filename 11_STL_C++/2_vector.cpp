#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<float> vf{2, 3, 2.2, 54.5, 6.7, 4, 5.7, 54.75, 4};
    vf.push_back(8);
    vf.push_back(6);
    vf.pop_back();
    for (float num : vf)
        cout << num << endl;

    // vector<float>::iterator it;
    // for (it = vf.begin(); it != vf.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // vector<float>::reverse_iterator rit;
    // for (rit = vf.rbegin(); rit != vf.rend(); rit--)
    // {
    //     cout << *rit << endl;
    // }
    return 0;
}