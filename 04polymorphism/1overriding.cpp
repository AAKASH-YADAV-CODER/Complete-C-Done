#include <bits/stdc++.h>
using namespace std;

class parent
{
public:
    void display()
    {
        cout << "parent function" << endl;
    }
};
class child : public parent
{
public:
    void display()
    {
        cout << "Child class function" << endl;
    }
};
int main()
{
    child c;
    c.display(); // this is function overriding same function in both parent and class
    return 0;
}