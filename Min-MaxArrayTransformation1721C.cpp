#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, i, j;
        cin >> n;
        int a[n], b[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int d1[n], d2[n];
        int k = 0;
        for (i = 0; i < n; i++)
        {
            if (a[i] <= b[k])
                d1[i] = b[k] - a[i];
            else
            {
                int lower = k + 1, upper = n - 1;
                while (lower <= upper)
                {
                    int mid = (upper + lower) / 2;
                    if (b[mid] < a[i])
                        lower = mid + 1;
                    else
                    {
                        k = mid;
                        upper = mid - 1;
                    }
                }
                d1[i] = b[k] - a[i];
            }
        }
        for (i = 0; i < n; i++)
            cout << d1[i] << " ";
        cout << endl;
        k = n - 1;
        d2[n - 1] = b[n - 1] - a[n - 1];
        for (i = n - 2; i >= 0; i--)
        {
            if (b[i] >= a[i + 1])
                d2[i] = b[k] - a[i];
            else
            {
                d2[i] = b[i] - a[i];
                k = i;
            }
        }
        for (i = 0; i < n; i++)
            cout << d2[i] << " ";
        cout << endl;
    }
}