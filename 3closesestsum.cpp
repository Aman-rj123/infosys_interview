
/*
Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

Return the sum of the three integers.

You may assume that each input would have exactly one solution.

*/

//Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int closervalue(vector<int> &v1, int target)
{

  sort(v1.begin(), v1.end());

  int diff = INT_MAX;
  int ans;
  for (int i = 0; i < v1.size(); i++)
  {
    int first = v1[i];
    int start = i + 1;
    int end = v1.size() - 1;
    while (start < end)
    {
      if (abs(first + v1[start] + v1[end] - target) < diff)
      {
        diff = abs(first + v1[start] + v1[end] - target);
        ans = first + v1[start] + v1[end];
      }

      if (first + v1[start] + v1[end] > target)
      {
        end--;
      }
      else
      {
        start++;
      }
    }
  }
  return ans;
}

int main()
{
  vector<int> v1 = {-1, 2, 1, -4};
  int target = 1;

  int closest = closervalue(v1, target);
  cout << "the near sum is :" << closest << endl;
  return 0;
}


 