#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int n, a, b, c, d;
    vector<int> vector;
    cin >> n;
    while (n--)
    {
        set<char> set;
        for (int j = 0; j < 2; j++)
        {
            string s;
            cin >> s;
            for (int i = 0; i < s.length(); i++)
            {
                set.insert(s[i]);
            }
        }
        std::cout << set.size() - 1 << std::endl;
    }

    return 0;
}