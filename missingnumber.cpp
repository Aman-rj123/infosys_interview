// #include <iostream>
// using namespace std;

// int missing(int arr[], int n) {
//     int ans = 0;

//     // XOR all numbers from 1 to n
//     for (int i = 1; i <= n; i++) {
//         ans ^= i;
//     }

//     // XOR all elements in the array
//     for (int i = 0; i < n - 1; i++) {
//         ans ^= arr[i];
//     }

//     return ans;
// }

// int main() {
//     int n = 5;
//     int arr[] = {1, 3, 4, 5}; // Adjusted the array size to n-1 elements

//     int missingElement = missing(arr, n);
//     cout << "The missing element is: " << missingElement << endl;

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int N = 6;
    int arr[] = {1, 2, 5, 4, 6};

    int ans = 0;
    for (int i = 1; i <= N; i++)
    {
        ans ^= i;
    }
    for (int i = 0; i < N-1; i++)
    {
        ans ^= arr[i];
    }

    cout << "the missing number is:" << ans;

    return 0;
}