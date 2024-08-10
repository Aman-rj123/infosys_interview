#include <iostream>

using namespace std;

int minsubarray(int arr[], int k, int n)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum = sum + arr[i];
    }
    int i = 0;
    int j = k;
    int minsum = sum;
    while (i < n)
    {
        sum = sum - arr[i];
        sum = sum + arr[j];
        i++;
        j++;
        minsum = min(minsum, sum);
    }

   // cout<<minsum;

    return minsum;
}
int main()
{

    int n = 7;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
   int min1_sum= minsubarray(arr, k, n);

   cout<<"the min subarray sum is "<<min1_sum<<endl;



    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}