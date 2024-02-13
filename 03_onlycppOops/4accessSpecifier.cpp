#include <bits/stdc++.h>
using namespace std;

// These are not possible in JAVA
// Access Specifier = read from notes
class Parent
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void funParent()
    {
        a = 10;
        b = 5;
        c = 15;
    }
};

class Child : private Parent
{
private:
protected:
public:
    void funChild()
    {
        // a=10;
        b = 5;
        c = 15;
    }
};

class GrandChild : public Child
{
public:
    void funGrandChild()
    {
        // a=10;
        // b=5;
        // c=20;
    }
};

// int main()
// {
//     // Child c;
//     // c.a=10;
//     // c.b=5;
//     // c.c=20;
// }

// This one is second Example for understanding how we can access data hiding data member and data functions
class Rectangle
{
private:
    int length;
    int breadth;

public:
    void setLength(int l)
    {
        if (l > 0)
            length = l;
        else
            length = 0;
    }

    void setBreadth(int b)
    {
        if (b > 0)
            breadth = b;
        else
            breadth = 0;
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r1;
    r1.setLength(10);
    r1.setBreadth(5);

    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;
    cout << "Length" << r1.getLength() << endl;
    cout << "Breadth" << r1.getBreadth() << endl;

    return 0;
}