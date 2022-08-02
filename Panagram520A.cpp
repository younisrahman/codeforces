#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int n;
    set<char> charSet;
    string s;
    cin >> n;
    cin >> s;
    if (n < 26)
    {
        cout << "NO" << endl;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        for (int i = 0; i < s.length(); i++)
        {
            charSet.insert(s[i]);
        }
        if (charSet.size() == 26)
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