#include <iostream>
using namespace std;
int partation(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }
    }
    int pivotindex = s + count;
    swap(arr[pivotindex], arr[s]);

    int i = s;
    int j = e;
    // check left and right side
    while (i <pivotindex && j > pivotindex)
    {
        while (arr[i] <= arr[pivotindex])
        {
            i++;
        }
        while(arr[j] >= arr[pivotindex])
        {
            j--;
        }
    }

    if (i <= pivotindex && j >= pivotindex)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    return pivotindex;
}

void quicksort(int arr[], int s, int e)
{

    if (s >= e)
    {
        return;
    }
    {
        int p = partation(arr, s, e);

        // left side sort
        quicksort(arr, s, p - 1);

        // right side
        quicksort(arr, p + 1, e);
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    int arr[8] = {3, 1, 2, 7, 5,11,9,11};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "original array" << endl;
    print(arr, n);

    quicksort(arr, 0, n - 1);

    cout << "sorted array" << endl;
    print(arr, n);

    return 0;
}