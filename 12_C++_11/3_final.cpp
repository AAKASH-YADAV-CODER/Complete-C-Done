#include <bits/stdc++.h>
using namespace std;
class Parent final
{
public:
    Parent()
    {
        cout << "Normal Constructor" << endl;
    }
    void fun() final
    {
        cout << "functions " << endl;
    }
};
class Child : public Parent
{
public:
    void fun()
    {
        cout << "Functions " << endl;
    }
};
int main()
{
    Child *ptr = new Child();
    delete ptr;
    return 0;
}

/*
by using final we can't inherit any thing from parent and also it stop overriding
*/