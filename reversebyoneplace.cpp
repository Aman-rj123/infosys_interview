#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void rotatebyoneplace(vector<int> &v1, int n)
{
     reverse(v1.begin(),v1.end());
     reverse(v1.begin()+1,v1.end());
}

int main()
{

    vector<int> v1 = {1, 2, 3, 4, 5};
    int n = v1.size();
    rotatebyoneplace(v1, n);
    for (int  i = 0; i <n; i++)
    {
        cout<<" the rotate array is :"<<v1[i]<<endl;    }
    

    return 0;
}