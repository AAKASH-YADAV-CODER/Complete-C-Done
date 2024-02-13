#include <bits/stdc++.h>
using namespace std;
#define c cout
namespace First
{
    void Fun()
    {
        c << "First" << endl;
    }
}

namespace Second
{
    void Fun()
    {
        c << "2" << endl;
    }
}
namespace Third
{
    void Fun()
    {
        c << "Third" << endl;
    }
}

using namespace First;
int main()
{
    Fun();
    Second::Fun();
    Third::Fun();
    return 0;
}
/*
1> using namespace we clear the name conflict and ambiguity and providing there identity
2> there is two syntax 1 is using namespace First; and First::fun();
*/