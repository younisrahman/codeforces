#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    set<int> setString;
    int i, ans = 0;
    string s, word;
    getline(cin, s);
    word = s.substr(1, s.length() - 2);
    for (i = 0; i < word.length(); i++)
    {
        if (word[i] != ' ' && word[i] != ',')
        {
            setString.insert(word[i]);
        }
    }
    cout << setString.size() << endl;
    return 0;
}