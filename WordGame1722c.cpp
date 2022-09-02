#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string strings[3][n];
        map<string, int> data;
        for(int i =0;i<3;i++){
            for(int j =0;j<n;j++){
                string s;
                cin >>s;
                strings[i][j] = s;
                data[strings[i][j]]++;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            int ans=0;
            for (int j = 0; j < n; j++)
            {
                if(data[strings[i][j]]==1){
                    ans+=3;
                }
                else if (data[strings[i][j]] == 2)
                {
                    ans ++;
                }
            }

            std::cout << ans << " ";
        }
        std::cout << std::endl;
    }
}