#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    // while (n != 0)
    // {
    //     int nextnum = a + b;
    //     cout << nextnum << " ";
    //     a = b;
    //     b = nextnum;
    //     n--;
    // }
    for (int i = 0; i <= n; i++)
    {
        int nextnum = a + b;
        cout << nextnum << " ";
        a = b;
        b = nextnum;
    }
    return 0;
}