#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int k, l, m, n, d, ans = 0;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    if (k == 1)
    {
        std::cout << d << std::endl;
    }
    else
    {
        int j = d + 1;

        int array[j];
        memset(array, 0, sizeof(array));
        for (int i = 1; i < j; i++)
        {
            if ((i * k) < j)
            {
                array[i * k] = 1;
            }
            if ((i * l) < j)
            {
                array[i * l] = 1;
            }
            if ((i * m) < j)
            {
                array[i * m] = 1;
            }

            if ((i * n) < j)
            {
                array[i * n] = 1;
            }
        }
        for (int i = 0; i < j; i++)
        {
            if (array[i] == 1)
            {
                ans++;
            }
        }
        std::cout << ans << std::endl;
    }
    return 0;
}