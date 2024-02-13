#include <bits/stdc++.h>
using namespace std;
// throw should be one but we can create multiple catches
// there is catch based on various data types
// ellipses used for all catch ... and it is uses after all catches
// child class exception handle first as compare to parents
class myexc1 : exception
{
};

class myexc2 : public myexc1
{
};
int main()
{
    try
    {
        throw myexc2();
    }
    catch (int i)
    {
        cout << "int type err" << i << endl;
    }
    catch (char c)
    {
        cout << "char type err" << c << endl;
    }
    catch (double d)
    {
        cout << "double error" << d << endl;
    }
    catch (string s)
    {
        cout << "string error" << s << endl;
    }
    catch (myexc2 e)
    {
        cout << "child class error first " << endl;
    }
    catch (myexc1 e)
    {
        cout << "after child then parent" << endl;
    }
    catch (...) // this universal catch comes after all catch
    {
        cout << "All catch" << endl;
    }
    return 0;
}