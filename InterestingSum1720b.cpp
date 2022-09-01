#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int n, a, b, c, d;
    set<int> set;
    cin >> n;
    while (n--)
    {
        cin >> a;
        c = a;
        vector<int> v;
        vector<vector<int> *> vec;
        while (c--)
        {
            cin >> b;
            v.push_back(b);
        }
        sort(v.begin(), v.end());
        cout << (v[a - 1] + v[a - 2]) - (v[0] + v[1]) << endl;
    }
    return 0;
}