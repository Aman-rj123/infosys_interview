// #include <iostream>
// using namespace std;
// int uniqueelement(int arr[], int n)
// {
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans = ans ^ arr[i];
//     }

//     return ans;
// }

// int main()
// {
//     int arr[9] = {1, 2, 2, 3, 3, 4, 4, 5, 5};

//     int result = uniqueelement(arr, 9);

//     cout<<"the unique number is :"<<result<<endl;

//     return 0;
// }
// /*
// <---- the time complexity of the is O(n)., we have to opitmize this and solve in the log(n) time.---->

// */

#include <iostream>
using namespace std;
int uniquebybinarysearch(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int mid = (start + end) / 2;
        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                start = mid + 2;
            }
            else
            {
                end = mid;
            }
        }
        else
        {
            if (arr[mid] == arr[mid - 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
        }
    }
    return arr[start];
}

int main()
{
    int arr[7] = {2, 2, 4, 4, 5, 6, 6};

    int result = uniquebybinarysearch(arr, 7);

    cout << "the unique element is :" << result << endl;

    return 0;
}