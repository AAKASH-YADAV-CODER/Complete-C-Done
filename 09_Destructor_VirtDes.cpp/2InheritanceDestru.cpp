#include <bits/stdc++.h>
using namespace std;
class Parent
{
public:
    int *p;
    ifstream rfile;
    Parent()
    {
        rfile.open("My.txt", ios::app);
        p = new int[2];
        cout << "this is parent class constructor" << endl;
    }
    ~Parent()
    {
        rfile.close();
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
    // Child c(2);
    Child *p = new Child(2);
    delete p;
    return 0;
}
/*
1> Child *p = new Child(2); if i only run this command so constructor of both class run not destructor
*/