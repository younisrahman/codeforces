#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int n, x, a, b, c, d;
    cin >> n >> x;
    vector<long long> heights(n + 2, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        heights[i] = a;
    }
    vector<long long> prefix(n + 2, 0);
    vector<long long> suffix(n + 2, 0);
    for (int i = 2; i <= n; i++)
    {
        prefix[i] = prefix[i - 1];
        if (heights[i] < heights[i - 1])
        {
            prefix[i] += heights[i - 1] - heights[i];
        }
    }
    for (int i = n; i >= 1; i--)
    {
        suffix[i] = suffix[i + 1];
        if (heights[i] < heights[i + 1])
        {
            suffix[i] += heights[i + 1] - heights[i];
        }
    }

    while (x--)
    {
        long long ans = 0;
        cin >> b >> c;
        if (b > c)
        {
            ans = suffix[c] - suffix[b];
        }
        else
        {
            ans = prefix[c] - prefix[b];
        }
        std::cout << ans << std::endl;
    }

    return 0;
}