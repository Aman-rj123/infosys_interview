#include <iostream>
using namespace std;
int Binary_search(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return -1;
}

int main()
{
    int n = 5;
    int key = 4;
    int arr[n] = {1, 2, 3, 4, 5};
    int index = Binary_search(arr, n, key);
    if(index != -1){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    return 0;
}
/*
Summary:
Binary search is efficient for searching in sorted arrays.
Always ensure the array is sorted before applying binary search.
The algorithm reduces the search space by half in each step, 
making it much faster than linear search for large datasets.
time complxity is log(N);
space complexity is:O(1);
*/
