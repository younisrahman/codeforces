#include <bits/stdc++.h>
//#include<iostream>
using namespace std;

int main()
{
    int n, a, b, c, d, e;
    vector<int> vector;
    set<int> set;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c >> d >> e;
        if (((c - 1 <= e) || (b - d <= e)) && ((d - 1 <= e) || (a - c <= e)))
        {
            cout << -1 << endl;
        }
        else
        {
            cout << a + b - 2 << endl;

        }
    }
    return 0;
}