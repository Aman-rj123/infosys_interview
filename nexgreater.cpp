// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> nextgreater(vector<int> &v1)
// {
//     vector<int> v;
//     int n = v1.size();
//     for (int i = 0; i < n; i++)
//     {
//         bool found = false;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (v1[j] > v1[i])
//             {
//                 v.push_back(v1[j]);
//                 found = true;
//                 break;
//             }
//         }
//         if (!found)
//         {
//             v.push_back(-1);
//         }
//     }
//     return v;
// }

// int main()
// {
//     vector<int> v1 = {6, 0, 8, 1, 3};
//     vector<int> result = nextgreater(v1);

//     for (int i = 0; i < result.size(); i++)
//     {
//         cout << "The next largest for " << v1[i] << " is: " << result[i] << endl;
//     }

//     return 0;
// }

//optimize();

#include <iostream>
using namespace std;
#include <vector>
#include <stack>
#include <bits/stdc++.h>

vector<int> nextgreater(vector<int> &v)
{

    int n = v.size();
    stack<int> st;
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {

        while (!st.empty() && st.top() <= v[i])
        {
            st.pop();
        }

        if (st.empty())
        {
            ans.push_back(-1);
        }
        else
        {
            ans.push_back(st.top());
        }
        st.push(v[i]);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> v = {6, 0, 8, 1, 3};

    vector<int> result = nextgreater(v);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
