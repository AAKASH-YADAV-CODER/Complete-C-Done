#include <bits/stdc++.h>
using namespace std;

class My : exception
{
    // Myexception()
    // {
    //     cout << "Nothing" << endl;
    // }
};
int division(int x, int y)
{
    if (y == 0)
        throw My();
    // throw string("this zero can't div. num.");
    return x / y;
}
int main()
{
    int a = 1, b = 0, c;
    try
    {
        c = division(a, b);
        cout << c << endl;
    }
    catch (My e)
    {
        cout << "Zero Can't divide a number" << endl;
    }
    return 0;
}
// 1> the data type do throw throw's catch should accept same data type(int,double,char,string,class) and how we can use these throw in between in functios let's see