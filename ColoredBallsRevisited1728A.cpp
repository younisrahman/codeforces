#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int n, a, b, c, d;
    set<int> set;
    cin >> n;
    while (n--)
    {
        cin >> a;
        vector<int> vec;
        for (int i = 0; i < a; i++)
        {
            cin >> b;
            vec.push_back(b);
        }
        cout << distance(vec.begin(), max_element(vec.begin(), vec.end())) + 1 << endl;
    }
    return 0;
}