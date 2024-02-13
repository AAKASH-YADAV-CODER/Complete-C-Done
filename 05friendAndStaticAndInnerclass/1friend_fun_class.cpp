#include <iostream>
using namespace std;
// this is compulsory to declare the class your as top because when this class my is compiling then your class will be fetch if there is no your class so it throw error
class Your;
class My
{
private:
    int a;

protected:
    int b;

public:
    int c;
    friend Your;
    friend void function1();
};
// This is Friend class
class Your
{
public:
    My m;
    void fun()
    {
        m.a = 10;
        cout << m.a << endl;
        m.b = 10;
        m.c = 10;
    }
};
// This is Friend function
void function1()
{
    My m;
    cout << m.c << "This value is of friend function " << endl;
}
int main()
{
    Your y;
    y.fun();
    function1();
}
