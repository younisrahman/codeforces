#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int n, a, b, c, d, e;
    vector<int> vector;
    set<int> set;
    cin >> n;
    while (n--)
    {
        cin >> a;
        int minx = 0, maxx = 0, miny = 0, maxy = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> b >> c;
            minx = min(minx, b);
            maxx = max(maxx, b);
            miny = min(miny, c);
            maxy = max(maxy, c);
        }
        long long sum = abs(minx) + maxx + abs(miny) + maxy;
        std::cout << sum * 2 << std::endl;
    }
    return 0;
}