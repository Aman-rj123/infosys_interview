#include <iostream>
using namespace std;
int squareroot(int n)
{
    int low = 1;
    int high = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (mid * mid <= n)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
}

int main()
{
 cout<<"enter the number"<<endl;
    int n;
    cin >> n;
    int result = squareroot(n);

    cout<<"The Square root of the number is :"<<result<<endl;

    return 0;
}