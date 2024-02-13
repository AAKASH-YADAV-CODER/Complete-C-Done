#include <iostream>
using namespace std;

/*program for lambda expression

*/
int main()
{
    // 1
    auto a = []()
    {
        cout << "Hello " << endl;
    };
    a();

    // 2
    [](int x, int y)
    {
        cout << "sum is " << x + y << endl;
    }(10, 30);

    // 3
    cout << ([]()
             { cout << "heelo" << endl; })
         << endl;

    // 4
    int a = 9;
    int b = 8;
    [&a, &b]()
    {
        cout << a << b << endl;
    }();
}