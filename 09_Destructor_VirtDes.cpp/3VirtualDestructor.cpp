#include <bits/stdc++.h>
using namespace std;
class Parent
{
public:
    int *p;
    Parent()
    {
        p = new int[2];
        cout << "this is parent class constructor" << endl;
    }
    virtual ~Parent()
    {
        cout << "this is parent class destructor" << endl;
        delete[] p;
    }
};
class Child : public Parent
{
public:
    int *p;
    Child(int x)
    {
        p = new int[x];
        cout << "this is child class constructor" << endl;
    }
    ~Child()
    {
        cout << "this is child class destructor" << endl;
        delete[] p;
    }
};
int main()
{
    Parent *p = new Child(2);
    delete p;
    return 0;
}
/*
1> there comes the concept of polymorphism means parent point child object and parent act as interface because it is virtual
2> issme phele child class ki DATA MEMBER AND MEMBER FUNCTION  execute honge after then parent only if we are using virtual
3>otherwise parent ke DM and MF execute hotte
*/