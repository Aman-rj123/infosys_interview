#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    int s=n;
    while (n > 0)
    {
        int ls = n % 10;
        sum = sum + pow(3, ls);
        n = n / 10;
    }
    if (s == sum)
    {
        cout << "aromster number" << endl;
    }
    else
    {
        cout << "not a armostrong number" << endl;
    }

    return 0;
}