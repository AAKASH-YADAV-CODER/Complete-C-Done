#include <bits/stdc++.h>
using namespace std;
// operator overloading := +,-,(),++,new,delete these are some operator in cpp
class Complex
{
private:
    int real, imaginary;

public:
    Complex(int r = 0, int i = 0)
    {
        this->real = r;
        this->imaginary = i;
    }
    void display()
    {
        cout << real << endl
             << imaginary << endl;
    }
    // Complex operator+(Complex x) // this is operator overloading
    // {
    //     Complex dummy;
    //     dummy.real = real + x.real;
    //     dummy.imaginary = imaginary + x.imaginary;
    //     return dummy;
    // }

    friend Complex operator+(Complex c1, Complex c2); // this is operator overloading using friend function
};
Complex operator+(Complex c1, Complex c2)
{
    Complex dummy;
    dummy.real = c1.real + c2.real;
    dummy.imaginary = c1.imaginary + c2.imaginary;
    return dummy;
}
int main()
{
    // one more advantage of friend function that we can access data member as private not like operator overloading we manually setting data member as shown below c1.real=5 like this
    Complex c1(3, 4), c2(4, 5), c;

    // c1.real = 3;
    // c1.imaginary = 6;
    // c2.real = 3;
    // c2.imaginary = 6;
    c = c1 + c2;
    c.display();
    return 0;
}