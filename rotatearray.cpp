#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& v1, int n, int d) {
    if (d >= n) {
        d = d % n;
    }
    reverse(v1.begin(), v1.begin() + d);
    reverse(v1.begin() + d, v1.end());
    reverse(v1.begin(), v1.end());
}

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5};
    int n = v1.size();
    int d = 2;
    rotate(v1, n, d);

    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }

    return 0;
}
