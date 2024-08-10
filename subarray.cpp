// //Calculate the  maximum sum of every contiguous subarray of size k
//maximum sum 
#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum = sum + arr[i];
    }
    int maxsum = 0;
    int i = 0;
    int j = k;
    while (j < n)
    {
        sum = sum - arr[i];
        sum = sum + arr[j];
        i++;
        j++;

        maxsum = max(maxsum, sum);
    }
       cout<<maxsum<<endl;

    return 0;
}