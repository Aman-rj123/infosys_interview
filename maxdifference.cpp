
// /*
// Maximum Difference
// Difficulty: MediumAccuracy: 33.3%Submissions: 69K+Points: 4
// Given an integer array arr of integers, the task is to find the maximum absolute difference between the nearest left smaller element and the nearest right smaller element of every element in array arr. If for any component of the arr, the nearest smaller element doesn't exist then consider it as 0.

// Examples :Input: arr = [2, 4, 8, 7, 7, 9, 3]
// Output: 4
// Explanation: left smaller array ls = [0, 2, 4, 4, 4, 7, 2], right smaller rs = [0, 3, 7, 3, 3, 3, 0].
// Maximum Diff of abs(ls[i] - rs[i]) = abs(7 - 3) = 4
// */

// #include <iostream>
// using namespace std;
// #include <bits/stdc++.h>

// int maxdiffernece(vector<int> &v1)
// {
//     int n = v1.size();
//     stack<int> st;
//     vector<int> left(n, 0);
//     vector<int> right(n, 0);

//     for (int i = 0; i < n; i++)
//     {
//         while (!st.empty() && st.top() >= v1[i])
//         {
//             st.pop();
//         }
//         if (!st.empty())
//         {
//             left[i] = st.top();
//         }
//         st.push(v1[i]);
//     }
//     while (!st.empty())
//     {
//         st.pop();
//     }

//     for (int i = n - 1; i >= 0; i--)
//     {
//         while (!st.empty() && st.top() >=v1[i])
//         {
//             st.pop();
//         }
//         if (!st.empty())
//         {
//             right[i] = st.top();
//         }
//         st.push(v1[i]);
//     }

//     int maxdiffernec=INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         int maxvalue=abs(left[i]-right[i]);
//         maxdiffernec=max(maxdiffernec,maxvalue);
//     }
//     return maxdiffernec;
    
// }

// int main()
// {
//     vector<int> v1 = {2, 4, 8, 7, 7, 9, 3};

//      int result=maxdiffernece(v1);
//      cout<<"the maxvalue is :"<<result<<endl;
     
     

//     return 0;
// }

#include <iostream>
#include <vector>
#include <stack>
#include <climits>
#include <cmath>
#include <algorithm>

using namespace std;

int maxdifference(vector<int> &v1) {
    int n = v1.size();
    stack<int> st;
    vector<int> left(n, 0);
    vector<int> right(n, 0);

    // Finding the nearest smaller elements to the left
    for (int i = 0; i < n; i++) {
        while (!st.empty() && st.top() >= v1[i]) {
            st.pop();
        }
        if (!st.empty()) {
            left[i] = st.top();
        }
        st.push(v1[i]);
    }

    // Clear the stack before finding the nearest smaller elements to the right
    while (!st.empty()) {
        st.pop();
    }

    // Finding the nearest smaller elements to the right
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() >= v1[i]) {
            st.pop();
        }
        if (!st.empty()) {
            right[i] = st.top();
        }
        st.push(v1[i]);
    }

    int maxdifference = INT_MIN;
    // Calculate the maximum absolute difference
    for (int i = 0; i < n; i++) {
        int maxvalue = abs(left[i] - right[i]);
        maxdifference = max(maxdifference, maxvalue);
    }

    return maxdifference;
}

int main() {
    vector<int> v1 = {2, 4, 8, 7, 7, 9, 3};

    int result = maxdifference(v1);
    cout << "The max difference is: " << result << endl;

    return 0;
}
