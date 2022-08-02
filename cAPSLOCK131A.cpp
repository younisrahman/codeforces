#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int upper = 0;
    bool firstUpper = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0 && isupper(s[i]))
        {
            firstUpper = true;
        }
        if (isupper(s[i]))
        {
            upper++;
        }
    }
    if (!firstUpper && upper == 0 && s.length() > 1)
    {
        cout << s << endl;
    }
    else if ((!firstUpper && upper == (s.length() - 1)))
    {
        string first = s.substr(0, 1);
        string second = s.substr(1);
        transform(second.begin(), second.end(), second.begin(), ::tolower);
        transform(first.begin(), first.end(), first.begin(), ::toupper);
        string ans = first + second;
        std::cout << ans << std::endl;
    }
    else if (firstUpper && upper == (s.length()))
    {
        string str = s;

        transform(str.begin(), str.end(), str.begin(), ::tolower);

        std::cout << str << std::endl;
    }
    else
    {
        std::cout << s << std::endl;
    }

    return 0;
}