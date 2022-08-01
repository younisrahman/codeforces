#include <bits/stdc++.h>
//#include<iostream>
#include <set>
using namespace std;
int main()
{
    int p, t, n = 2;
    std::set<char> a;
    cin >> p;
    while (n--)
    {
        cin >> t;
        while (t--)
        {
            int c;
            cin >> c;
            a.insert(c);
        }
    }
    if (a.size() == p)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}