#include <iostream>
using namespace std;
#include <bits/stdc++.h>

double medium(vector<int> &v1, vector<int> &v2)
{
    int n = v1.size();
    int m = v2.size();
    vector<int> v3;
    for (int i = 0; i < n; i++)
    {
        v3.push_back(v1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        v3.push_back(v2[i]);
    }

    sort(v3.begin(), v3.end());

    int s = v3.size();
    if (s % 2 == 0)
    {
        return (v3[(s / 2) - 1] + v3[s / 2]) / 2.0;
    }
    else
    {
        return v3[s / 2];
    }
}
int main()
{
    vector<int> v1 = {1, 2};
    vector<int> v2 = {3,4};

     double medium2=medium(v1, v2);
     cout<<"the medium of the two combining array is :"<<medium2;
    
    return 0;
}