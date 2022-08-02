#include <bits/stdc++.h>
//#include<iostream>
using namespace std;
int main()
{
    int n, min = 999, max = 0, minIndex, maxIndex;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= min)
        {
            min = a[i];
            minIndex = i;
        }
        if (a[i] > max)
        {
            max = a[i];
            maxIndex = i;
        }
    }
    if (maxIndex > minIndex)
    {
        minIndex++;
    }
    std::cout << (maxIndex + (n - 1)) - minIndex << std::endl;
    return 0;
}