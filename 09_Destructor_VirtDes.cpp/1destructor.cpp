#include <bits/stdc++.h>
using namespace std;
class Parent
{
public:
    int *p;
    Parent(int x)
    {
        p = new int[x];
        cout << "this is constructor" << endl;
    }
    ~Parent()
    {
        cout << "this is destructor" << endl;
        delete[] p;
    }
};
int main()
{
    // Parent p(3);
    Parent *p = new Parent(3);
    delete p;

    return 0;
}
/*
1> we know we use destructor for deallocating the memory which used by data in code especially heap wali dynamic memory because it is running throughout the executing of program and may cause crash our program if it run long time

2> remember jo bhi new operator se create hova hoga usko pakka delete karna hai nahi tho memory consume krega
*/