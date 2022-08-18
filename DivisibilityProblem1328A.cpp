#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int n, a, b, ans;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        ans = 0;

        if (a % b != 0)
        {
            ans = (floor((a + b) / b) * b) - a;
        }
        cout << ans << endl;
    }
    return 0;
}