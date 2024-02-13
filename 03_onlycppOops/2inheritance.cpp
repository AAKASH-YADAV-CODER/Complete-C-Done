#include <bits/stdc++.h>
using namespace std;

// This is INHERITANCE

// BASE CLASS
class Rectangle
{
private:
    int len, br;

public:
    // This is prototype of function
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);

    void setLength(int l)
    {
        if (l > 0)
        {
            len = l;
        }
    }
    void setBreadth(int b)
    {
        if (b > 0)
        {
            br = b;
        }
    }
    int area()
    {
        return len * br;
    }
    int perimeter()
    {
        return 2 * (len + br);
    }
    int getLength()
    {
        return len;
    }
    int getBreadth()
    {
        return br;
    }
};
// Accessing function outside of class
Rectangle::Rectangle()
{
    len = 1;
    br = 1;
}

// Derived Class
class Cuboid : public Rectangle
{
private:
    int he;

public:
    void setHeight(int h)
    {
        if (h > 0)
        {
            he = h;
        }
    }
    int volume()
    {
        return he * getLength() * getBreadth();
    }
};

int main()
{
    Cuboid c;
    // c.setLength(4);
    // c.setBreadth(8);
    c.setHeight(9);
    // c.volume();
    cout << "this is volume " << c.volume() << endl;
    return 0;
}

// Another Example *****************************************************************************************************
// class Rectangle
// {
// private:
//     int length;
//     int breadth;

// public:
//     Rectangle();
//     Rectangle(int l, int b);
//     Rectangle(Rectangle &r);
//     int getLength() { return length; }
//     int getBreadth() { return breadth; }

//     void setLength(int l);
//     void setBreadth(int b);
//     int area();
//     int perimeter();
//     bool isSquare();
//     ~Rectangle();
// };

// class Cuboid : public Rectangle
// {
// private:
//     int height;

// public:
//     Cuboid(int h)
//     {
//         height = h;
//     }

//     int getHeight() { return height; }

//     void setHeight(int h) { height = h; }

//     int volume() { return getLength() * getBreadth() * height; }
// };

// int main()
// {
//     Cuboid c(5);
//     c.setLength(10);
//     c.setBreadth(7);

//     cout << "Volume is " << c.volume() << endl;
// }

// Rectangle::Rectangle()
// {
//     length = 1;
//     breadth = 1;
// }

// Rectangle::Rectangle(int l, int b)
// {
//     length = l;
//     breadth = b;
// }

// Rectangle::Rectangle(Rectangle &r)
// {
//     length = r.length;
//     breadth = r.breadth;
// }

// void Rectangle::setLength(int l)
// {
//     length = l;
// }

// void Rectangle::setBreadth(int b)
// {
//     breadth = b;
// }

// int Rectangle::area()
// {
//     return length * breadth;
// }

// int Rectangle::perimeter()
// {
//     return 2 * (length + breadth);
// }

// bool Rectangle::isSquare()
// {
//     return length == breadth;
// }

// Rectangle::~Rectangle()
// {
//     // cout<<"Rectangle Destroyed";
// }