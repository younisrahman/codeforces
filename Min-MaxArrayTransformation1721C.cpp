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
        vector<int> veca;
        vector<int> vecb;
        for (int i = 0; i < a; i++)
        {
            cin >> b;
            veca.push_back(b);
        }
        for (int i = 0; i < a; i++)
        {
            cin >> c;
            vecb.push_back(c);
        }

        // for (int i = 0; i < a; i++)
        // {
        //     std::cout << veca[i] << "  ";
        // }
        // std::cout << std::endl;
        // for (int i = 0; i < a; i++)
        // {
        //     std::cout << vecb[i] << "  ";
        // }
    }
    return 0;
}