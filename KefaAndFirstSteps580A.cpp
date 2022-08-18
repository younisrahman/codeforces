#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int n, count = 0, max = 0, ans = 0;
    cin >> n;
    while (n--)
    {
        int c;
        cin >> c;
        if (c >= max)
        {
            max = c;
            count++;
        }
        else
        {
            if (count > ans)
            {
                ans = count;
            }
            count = 1;
            max = c;
        }
    }
    if (count > ans)
    {
        ans = count;
    }
    cout << ans << endl;
    return 0;
}