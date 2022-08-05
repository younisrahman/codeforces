#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int n, a, b, c, d;

    cin >> n;
    while (n--)
    {
        cin >> a;
        vector<int> v;
        for (int i = 9; i >= 1; i--)
        {
            if (a - i >= 0)
            {
                v.insert(v.begin(), i);
                a = a - i;
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            std::cout << v[i];
        }
        std::cout << endl;
    }
    return 0;
}