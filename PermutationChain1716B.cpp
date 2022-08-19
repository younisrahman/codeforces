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
        int arr[a + 1];
        std::cout << a << std::endl;
        for (int i = 1; i <= a; i++)
        {
            cout << i << " ";
            arr[i] = i;
        }
        cout << endl;
        for (int i = 2; i <= a; i++)
        {
            swap(arr[i], arr[i - 1]);
            for (int j = 1; j <= a; j++)
            {
                cout << arr[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}