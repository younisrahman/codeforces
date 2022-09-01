#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<vector<string> > vec;

    string str;

    for (int i = 0; i < 2; i++)
    {

        vector<string> v1;

        for (int j = 0; j < 2; j++)
        {

            cin >> str;
            v1.push_back(str);
        }

        // Pushing back above 1D vector
        // to create the 2D vector
        vec.push_back(v1);
    }

    // Displaying the 2D vector
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
    return 0;
}