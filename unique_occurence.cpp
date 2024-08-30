/*#include <iostream>
// using namespace std;
// int unique_element(int arr[], int n)
// {
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans = ans ^ arr[i];
//     }

//     return ans;
// }
// //<<<----Time complexity is:-o(n);
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int result = unique_element(arr, n);

//     cout <<"the unique element is :"<<result<<endl;

      //  return 0;
//} */

#include <iostream>
using namespace std;

int uniiqueelement(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        int mid = (left + right) / 2;
        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                left = mid + 2;
            }
            else
            {
                right = mid;
            }
        }
        else
        {
            if (arr[mid] == arr[mid - 1])
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }
    }
    return arr[left];
}

int main()
{
    int arr[9] = {1, 1, 2, 2, 3, 4, 4, 5, 5};

    int unique = uniiqueelement(arr, 9);
    cout << "the unique element is" << unique << endl;
    return 0;
}