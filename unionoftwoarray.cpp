#include <iostream>
using namespace std;
#include <bits/stdc++.h>

vector<int> unioneoftwoarray(int arr1[], int arr2[], int n, int m)
{
    set<int> s;
    vector<int>v;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        s.insert(arr2[i]);
    }
    for (auto it : s)
    {
       v.push_back(it);
    }
    return v;
}

int main()
{
    int n = 5;
    int m = 5;
    int arr1[n] = {1, 2, 3, 4, 5};
    int arr2[m] = {3, 4, 5, 7, 8};

  vector<int>v=  unioneoftwoarray(arr1, arr2, n, m);
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
    return 0;
}
