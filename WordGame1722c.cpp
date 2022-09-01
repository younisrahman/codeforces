#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int n, a, b, c, d;
    vector<vector<string> > vec;
    cin >> n;
    while (n--)
    {
        cin >> a;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < a; j++)
            {
                string s;
                cin >> s;
                // vec[i][j].push_back(s);
                // vec[i][j] = s;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < a; j++)
            {
                cout << vec[i][j];
            }
        }
    }
    return 0;
}