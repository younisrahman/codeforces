#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int n, a, b, c, d;
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a == 1)
        {
            cout << 2 << endl;
        }
        else if (a % 3 == 0)
        {
            cout << a / 3 << endl;
        }
        else
        {
            cout << a / 3 + 1 << endl;
        }
    }

    return 0;
}