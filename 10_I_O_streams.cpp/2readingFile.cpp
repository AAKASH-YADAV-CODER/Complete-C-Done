#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream rfile;
    rfile.open("New.txt");

    if (!rfile.is_open())
        cout << "this file can't open" << endl;
    // 1> know about format and create variable
    string s;
    // string s1;

    // 2> open by object all above variable
    rfile >> s;
    // rfile >> s1;

    // 3> now cout them
    cout << s << " " << endl
         << "" << endl;
    if (rfile.eof())
        cout << "End of file" << endl;
    rfile.close();
    return 0;
}
/*
1>in this we need 3step to read
-> know about format means order of data types and create variable
->open by object rfile >> data type
->at last cout all of them
*/