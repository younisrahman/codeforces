#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int n, a, b, c, d;
    vector<int> vector;
    set<int> set;
    cin >> n;
    while (n--)
    {
        cin >> a;
        for (int i = a - 3; i > 1; i--)
        {
            cout << i << " ";
        }
        cout << a - 2 << " 1 " << a - 1 << " " << a << endl;
    }
    return 0;
}