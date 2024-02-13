#include <iostream>
using namespace std;

class Test
{
public:
    int a;
    static int count;
    Test()
    {
        a = 10;
        count++;
    }
    // This is static function can only access static member
    static int getCount()
    {
        return count;
    }
};
// this is global variable which is only give access to Test class
int Test::count = 0;
int main()
{
    Test t1, t2;
    cout << Test::getCount() << endl;
    cout << t1.getCount() << endl;
}
