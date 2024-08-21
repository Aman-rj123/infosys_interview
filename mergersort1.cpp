#include <iostream>
using namespace std;
#include <bits/stdc++.h>

vector<int> merge_arr(vector<int> &left, vector<int> &right)
{

    vector<int> result;

    int i = 0;
    int j = 0;
    while (i < left.size() && j < right.size())
    {
        if (left[i] < right[j])
        {
            result.push_back(left[i]);
            i++;
        }
        else
        {
            result.push_back(right[j]);
            j++;
        }
    }
    while (i < left.size()) {
        result.push_back(left[i]);
        i++;
    }

    // Copy remaining elements from right, if any
    while (j < right.size()) {
        result.push_back(right[j]);
        j++;
    }

    return result;
}

vector<int> merger_sort(vector<int> &arr)
{

    if (arr.size() <= 1)
    {
        return arr;
    }

    int mid = arr.size() / 2;

    vector<int> left(arr.begin(), arr.begin() + mid);
    vector<int> right(arr.begin() + mid, arr.end());

    left = merger_sort(left);
    right = merger_sort(right);

    return merge_arr(left, right);
}
int main()
{

    vector<int> arr = {2, 1, 5, 3, 4, 7, 6};

    vector<int> answer = merger_sort(arr);

   for (int i = 0; i < answer.size(); i++)
   {
     cout<<answer[i]<<" ";
   }
   

    return 0;
}