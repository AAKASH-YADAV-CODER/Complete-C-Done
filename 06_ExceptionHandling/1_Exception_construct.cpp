#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 1, b = 0, c;
    try
    {
        if (b == 0)
            throw -1; // Main purpose of throw and catch to give better understanding or communication b/w prog. and progm.
        c = a / b;
    }
    catch (int i)
    {
        cout << "Zero Can't divide a number" << i << endl;
    }
    return 0;
}
// otherwise these error can handle with if Else also