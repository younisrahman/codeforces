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
        vector<int> veca[a];
        vector<int> vecb[a];
        for (int i = 0; i < a; i++)
        {
            cin >> b;
            veca->push_back(b);
        }
        for (int i = 0; i < a; i++)
        {
            cin >> c;
            vecb->push_back(c);
        }

        for (int i = 0; i < a; i++)
        {
            std::cout << veca[i] << "  " << std::endl;
        }
        for (int i = 0; i < a; i++)
        {
            std::cout << vecb[i] << "  " << std::endl;
        }
    }
    return 0;
}