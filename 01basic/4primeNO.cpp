#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool prime = true;
    if (n == 0 || n == 1)
    {
        prime = false;
    }
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }
    if (prime)
    {
        cout << "Yes number is prime " << n << endl;
    }
    else
    {
        cout << "no number is not prime" << n << endl;
    }

    return 0;
}