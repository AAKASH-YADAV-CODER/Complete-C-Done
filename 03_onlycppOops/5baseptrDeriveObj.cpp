#include <iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout << "fun1 of Base" << endl;
    }
};

class Derived : public Base
{
public:
    void fun2()
    {
        cout << "fun2 of Derived" << endl;
    }
};

int main()
{

    Derived d;
    Base *ptr = &d;
    // or Base *ptr = new Derived();

    ptr->fun1();
    // ptr->fun2(); we can only access features of Base class only
    // we can not do derived ptr to base object not possible
    // Derived *ptrD;
    // ptrD = new Base();

    return 0;
}

/* example 2
class Rectangle
{
    public:
    void area()
    {
        cout<<"Area of Rectangle"<<endl;
    }

};

class Cuboid:public Rectangle
{
    public:
    void volume()
    {
        cout<<"Cuboid Volume"<<endl;
    }

};

int main()
{
    Cuboid c;
    Rectangle *p=&c;
    p->area();
    p->volume(); // this function cannot be call

    return 0;

}

// Example 3
class BasicCar
{
    public:
    void start()
    {
        cout<<"Car Started"<<endl;
    }

};

class AdvanceCar:public BasicCar
{
    public:
    void playmusic()
    {
        cout<<"Playing Music"<<endl;
    }

};

int main()
{
    This is wrong
    BasicCar b;
    AdvanceCar *q=&b;


    AdvanceCar a;
    a.start();
    a.playmusic();
    BasicCar *ptr=&a;
    ptr->start();
    ptr->playmusic(); // this function cannot be called.

}

*/