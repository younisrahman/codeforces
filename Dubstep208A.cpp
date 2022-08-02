#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    string s, word, ans;
    cin >> s;
    ans = s;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            cout << " ";
        }
        else
        {
            cout << s[i];
        }
    }
    return 0;
}