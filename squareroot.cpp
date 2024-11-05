#include <iostream>
using namespace std;
int squareroot(int n)
{
    if(n<0){
        return -1;
    }
    if(n==0){
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
 cout<<"enter the number"<<endl;
    int n;
    cin >> n;
    int result = squareroot(n);

    if(result != -1){
        cout<<"the square root of the given number is :"<<result<<endl;
    }
    else{
        cout<<"the give number is the negative number"<<endl;
    }

    return 0;
}