#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream wfile("New.txt", ios::app);
    wfile << "This is new file creating by File Handling with Writing file ideology" << endl;
    wfile << "something about this month Feb its leap year with 29days in this month" << endl;
    wfile.close();
    return 0;
}
/*
1> This is simple but just using library #include<fstream> and create object of ofstream(outputfilestream) wfile and
just use it as like above and don't forget to close this file .
*/