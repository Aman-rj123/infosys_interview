#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int unioneoftwoarray(int arr1[], int arr2[], int n, int m)
{
    set<int> s;
    
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
        count++;
    }
    return count;
}

int main()
{
    int n = 5;
    int m = 5;
    int arr1[n] = {1, 2, 3, 4, 5};
    int arr2[m] = {3, 4, 5, 7, 8};

   int lenght= unioneoftwoarray(arr1, arr2, n, m);
  cout<<"the length of the union of the two array is :"<<lenght<<endl;
    return 0;
}
