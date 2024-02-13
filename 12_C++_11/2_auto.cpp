#include <bits/stdc++.h>
using namespace std;
string fun()
{
    // cout << "This is Normal function " << endl;
    return ("This is Normal function ");
}
int main()
{
    int x = 9;
    float y = 217.3;
    auto z = x + y;
    cout << "This is how it store two different data types => " << z << endl;
    auto a = fun();
    // fun();
    decltype(y) b = x + z;
    cout << a
         << endl
         << b << endl;
    return 0;
}