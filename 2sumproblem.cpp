#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// vector<int> twosum(vector<int> &arr, int target)
// {
//     vector<int> ans;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             if (arr[i] + arr[j] == target)
//             {
//                 ans.push_back(i);
//                 ans.push_back(j);
//             }
//         }
//     }

//     return ans;
// }
//optimise code.

vector<int> optimetwosum(vector<int> &arr, int target)
{
    sort(arr.begin(), arr.end());
    vector<int> ans1;
    int low = 0;
    int high = arr.size() - 1;
    while (low < high)
    {
        int ans2 = arr[low] + arr[high];
        if (ans2 == target)
        {
            ans1.push_back(low);
            ans1.push_back(high);
            low++;
            high--;
        }
        else if (ans2 > target)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return ans1;
}

int main()
{
    vector<int> arr = {11, 15, 3, 2, 7};
    int target = 9;

    vector<int> result = optimetwosum(arr, target);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}