#include <bits/stdc++.h>
using namespace std;
class Innova
{
private:
    string color;

public:
    static int price;
    Innova(string s)
    {
        this->color = s;
        price = price + 20;
    }
    string getColor()
    {
        return color;
    }
    static int getPrice()
    {

        return price;
    }
};
int Innova::price = 0;

int main()
{
    Innova i("red");
    cout << i.getPrice() << endl;
    cout << i.getColor() << endl;

    Innova i2("white");
    cout << i2.getPrice() << endl;
    cout << i2.getColor() << endl;

    cout << "This is total value of purchasing car's ==>  " << Innova::price << endl;
    return 0;
}