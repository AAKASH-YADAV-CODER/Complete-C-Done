#include <bits/stdc++.h>
using namespace std;
class outer
{
public:
    int x = 0;
    static int a;
    class inner // This can only access static data members of outer class not all members
    {
    public:
        int b = 17;
        void displayInner()
        {
            cout << a << endl;
        }
    };
    inner i;
    void outertoinner()
    {
        i.displayInner();
        cout << i.b << endl;
    }
};
int outer::a = 19;
int main()
{
    outer o;
    o.outertoinner();

    outer::inner i;
    i.displayInner();

    return 0;
}