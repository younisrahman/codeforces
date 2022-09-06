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
        int vecmin[a];
        int vecmax[a];

        for (int i = a - 1; i >= 0; i--)
        {
            int count = 0;
            for (int j = 0; j < a; j++)
            {
                if (veca[i] >= vecb[j])
                {
                    vecmin[i] = vecb[j] - veca[i];
                    count++;
                    break;
                }
            }
            for (int k = a - 1; k >= 0; k--)
            {
                if (veca[i] >= vecb[k])
                {
                    vecmax[i] = vecb[k] - veca[i];
                    count++;
                    break;
                }
            }
        }

        for (int i = 0; i < a; i++)
        {
            std::cout << vecmin[i] << "  ";
        }
        std::cout << std::endl;
        for (int i = 0; i < a; i++)
        {
            std::cout << vecmax[i] << "  ";
        }
    }
    return 0;
}