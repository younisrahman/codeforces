#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int l = 0, r = n - 1;
        while (l <= r && s[l] == s[r])
            l++, r--;
        while (l <= r && s[l] == s[l + 1])
            l += 2;
        if (l <= r)
            puts("Alice");
        else
            puts("Draw");
    }
    return 0;
}