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
        vector<int> vector;
        set<int> set;

        for (int i = 0; i < a; i++)
        {
            cin >> b;
            vector.push_back(b);
        }
        for (int i = a; i > 0;)
        {
            set.insert(vector[i - 1]);
            i--;
            if (set.size() + i != a)
            {
                break;
            }
        }
        cout << a - set.size() << endl;
    }
    return 0;
}