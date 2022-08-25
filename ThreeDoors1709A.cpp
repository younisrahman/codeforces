#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int n, a, one, two, three;
    vector<int> vector;
    set<int> set;
    cin >> n;
    while (n--)
    {
        cin >> a;
        cin >> one >> two >> three;
        if (a == 1)
        {
            if (one == 0)
            {
                cout << "NO" << endl;
                continue;
            }
            else if (one == 2)
            {
                if (two == 0)
                {
                    cout << "NO" << endl;
                    continue;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
            else
            {
                if (three == 0)
                {
                    cout << "NO" << endl;
                    continue;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
        }
        else if (a == 2)
        {
            if (two == 0)
            {
                cout << "NO" << endl;
                continue;
            }
            else if (two == 1)
            {
                if (one == 0)
                {
                    cout << "NO" << endl;
                    continue;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
            else
            {
                if (three == 0)
                {
                    cout << "NO" << endl;
                    continue;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
        }
        else
        {
            if (three == 0)
            {
                cout << "NO" << endl;
                continue;
            }
            else if (three == 2)
            {
                if (two == 0)
                {
                    cout << "NO" << endl;
                    continue;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
            else
            {
                if (one == 0)
                {
                    cout << "NO" << endl;
                    continue;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
        }
    }
    return 0;
}