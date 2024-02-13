#include <bits/stdc++.h>
using namespace std;
class Parent
{
public:
    Parent()
    {
        cout << "Constructor default or non parameterized " << endl;
    }
    int fun(int x, int y)
    {
        return x + y;
    }
};

int main()
{
    // 1
    // unique_ptr<Parent> ptr(new Parent());
    // cout << ptr->fun(7, 2) << endl;
    // unique_ptr<Parent> ptr2=ptr;
    // unique_ptr<Parent> ptr2(ptr);
    // unique_ptr<Parent> ptr1;
    // ptr1 = move(ptr);
    // cout << ptr1->fun(7, 2) << endl;

    // 2
    // shared_ptr<Parent> ptr(new Parent());
    // shared_ptr<Parent> ptr1 = ptr;
    // cout << ptr->fun(2, 2) << endl
    //      << ptr1->fun(99, 1) << endl;
    // cout << ptr.use_count() << endl;

    return 0;
}