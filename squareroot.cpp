#include <iostream>
using namespace std;
int squareroot(int n)
{
    if (n < 0)
    {
        return -1;
    }
    if (n == 0)
    {
        return 0;
    }
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
    cout << "enter the number" << endl;
    int n;
    cin >> n;
    int result = squareroot(n);

    if (result != -1)
    {
        cout << "the square root of the given number is :" << result << endl;
    }
    else
    {
        cout << "the give number is the negative number" << endl;
    }

    return 0;
}
/*


Key Points for Finding Square Root Using Binary Search
Time Complexity:
𝑂
(
log
⁡
𝑛
)
O(logn) - Efficiently narrows down the search space.
Space Complexity:
𝑂
(
1
)
O(1) - Uses a constant amount of space.
Initialization:
Set low to 1 (or 0 for non-negative numbers).
Set high to the given number n.
Loop Conditions:
Continue while low <= high.
Mid Calculation:
Compute mid as (low + high) / 2.
Check Conditions:
If
mid
×
mid
=
=
𝑛
mid×mid==n: Return mid.
If
mid
×
mid
<
𝑛
mid×mid<n: Update low = mid + 1.
If
mid
×
mid
>
𝑛
mid×mid>n: Update high = mid - 1.
Return Value:
Return high as the largest integer whose square is less than or equal to n.
Edge Cases:
Return -1 for negative numbers (not defined).
Return 0 for an input of 0.








C


*/