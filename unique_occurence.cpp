#include <iostream>
using namespace std;
int unique_element(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = unique_element(arr, n);

    cout <<"the unique element is :"<<result<<endl;

        return 0;
}