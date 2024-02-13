#include <bits/stdc++.h>
using namespace std;
template <class T, class N>
T GreaterNum(T x, N y)
{
    return x > y ? x : y;
}
int main()
{
    // this is for int
    //  cout << GreaterNum(12, 5) << endl;

    // this is for double
    // cout << GreaterNum(12.5, 5.5) << endl;

    // this is for char
    // cout << GreaterNum('e', 'x') << endl;

    // this is for different data type is hum eek or class ad kr denge <class T,class A>
    cout << GreaterNum(4, 3.2) << endl;
    return 0;
}