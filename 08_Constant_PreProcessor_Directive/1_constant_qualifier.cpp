#include <bits/stdc++.h>
using namespace std;
// 4>
// int addition(int a, int b) const
// {
//     // a++;
//     // b++;
//     return a + b;
// }

// 5>
int GreaterNum(int const &x, const int &y)
{
    // y += 7;
    return x > y ? x : y;
}
int main()
{
    // 1> Data can't be change
    const int x = 10;
    int const y = 20;
    int a = 9;
    int b = 7;
    // const int *ptr = &a;
    // ++*ptr;
    // ptr = &b;
    // cout << *ptr << endl;

    // 2> Data change but ptr navigation is can not change
    // int *const ptr = &a;
    // ptr = &b;
    // ++*ptr;
    // cout << *ptr << endl;

    // 3>both ptr and data are fixed and can't change respectively
    // const int *const ptr = &a;
    // ++*ptr;
    // ptr = &b;
    // cout << *ptr << endl;

    // 4> functions constant in this function we can't modify anything
    // cout << addition(a, b) << '\n';

    // 5> pass by reference in this we make parameter constant .we know this call by refer. make inline func we can use variable of another function directly without using any memory(formal parameter)
    cout << a << "  " << b << endl;
    cout << GreaterNum(a, b) << endl;
    cout << a << "  " << b << endl;

    return 0;
}
/*
1>Data can't change but ptr can change
2> Data change but ptr navigation is can not change
3>both ptr and data are fixed and can't change respectively
4> functions constant in this function we can't modify anything
5>pass by reference in this we make parameter constant .we know this call by refer. make inline func we can use variable of another function directly without using any memory(formal parameter)
*/