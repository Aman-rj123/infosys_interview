/*Kadane's Algorithm is a popular algorithm used to find the maximum sum of
 a contiguous subarray within a one-dimensional array of numbers.
 This problem is commonly referred to as the "maximum subarray problem."*/

#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int contigioussubarray(vector<int> &arr)
{
    int n = arr.size();
    int sum = 0;
    int maxsum = arr[0];
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        // if (sum > maxsum)
        // {
        //     maxsum = sum;
        // }
        maxsum=max(maxsum,sum);

        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxsum;
}

int main()
{

    vector<int> arr = {1, 2, 3, -2, 5};

    cout << "the maximu sum is:" << contigioussubarray(arr);

    return 0;
}