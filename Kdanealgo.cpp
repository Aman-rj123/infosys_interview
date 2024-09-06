#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int kd(vector<int> &v1)
{
    int n = v1.size();
    int maxsum = INT_MIN;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + v1[i];
        maxsum = max(maxsum, sum);
        if(sum<0){
            sum=0;
        }
    }
    return maxsum;
}
int main()
{
    vector<int> v1 = {-1, -2, -3, -4};

   int result= kd(v1);
   cout<<"the max sum is:"<<result;

    return 0;
}