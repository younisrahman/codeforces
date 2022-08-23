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
        int sum = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> b >> c;
            sum += abs(b) + abs(c);
        }
        std::cout << sum * 2 << std::endl;
    }
    return 0;
}