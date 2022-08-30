#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
// 10
// 5
// Timur
// 5
// miurT
// 5
// Trumi
// 5
// mriTu
// 5
// timur
// 4
// Timr
// 6
// Timuur
// 10
// codeforces
// 10
// TimurTimur
// 5
// TIMUR
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        if (s == "Timru")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}