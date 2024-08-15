#include <iostream>
using namespace std;
#include <bits/stdc++.h>

vector<int> meregrarray(vector<int> v1, vector<int> v2)
{
    vector<int> ans;
    for (int i = 0; i < v1.size(); i++)
    {
        ans.push_back(v1[i]);
    }
    for (int i = 0; i < v2.size(); i++)
    {
        ans.push_back(v2[i]);
    }

    sort(ans.begin(), ans.end());

    return ans;
}
int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};

    vector<int> v2 = {4, 5, 6, 7, 8};

    vector<int> result = meregrarray(v1, v2);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}



