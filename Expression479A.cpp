#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int a, b, c, res1, res2, res3, res4, res5, res6;
    cin >> a >> b >> c;
    res1 = a + b * c;
    res4 = (a + b) * c;
    res2 = a * b + c;
    res3 = a * (b + c);
    res5 = a * b * c;
    res6 = a + b + c;
    cout << max(max(max(res1, res2), max(res3, res4)), max(res5, res6)) << endl;

    return 0;
}