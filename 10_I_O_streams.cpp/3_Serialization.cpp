#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int RollNo;
    string Branch;
    // This is how looks like operator overloading outputfile stream and i/ofilestream
    friend ofstream &operator<<(ofstream &wfile, Student &s);
    friend ifstream &operator>>(ifstream &rfile, Student &s);
};
ofstream &operator<<(ofstream &wfile, Student &s)
{
    wfile << s.name << endl;
    wfile << s.RollNo << endl;
    wfile << s.Branch << endl;
    return wfile;
}
ifstream &operator>>(ifstream &rfile, Student &s)
{
    rfile >> s.name >> s.RollNo >> s.Branch;
    return rfile;
}

int main()
{
    Student s;
    // s.name = "Aakash Yadav";
    // s.RollNo = 1;
    // s.Branch = "cse";
    // ofstream wfile("college.txt");
    // wfile << s << endl;
    // wfile.close();

    // Reading now
    ifstream rfile("college.txt");
    rfile >> s;
    cout << s.name << endl;
    cout << s.RollNo << endl;
    cout << s.Branch << endl;
    rfile.close();
    return 0;
}

/*
1> i wanna suggest go through once to operator overloading then come here
i mean i'm doing this using operator overloading (ostream insertion << and istream extraction >>)
*/