#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> minAnd2ndMin(vector<int> &arr) {
    vector<int> ans;
    int n = arr.size();

    // Initialize min and second_min
    int min = INT_MAX;
    int second_min = INT_MAX;

    // Find the minimum element
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Find the second minimum element that is greater than min
    for (int i = 0; i < n; i++) {
        if (arr[i] > min && arr[i] < second_min) {
            second_min = arr[i];
        }
    }

    // Check if second_min was updated; if not, return {-1}
    if (second_min == INT_MAX) {
        return {-1};
    }

    // Add min and second_min to the result
    ans.push_back(min);
    ans.push_back(second_min);

    return ans;
}

int main() {
    vector<int> arr = {3, 1, 4, 1, 5, 9}; // Example array
    vector<int> result = minAnd2ndMin(arr);

    if (result.size() == 1 && result[0] == -1) {
        cout << "No unique second minimum element found." << endl;
    } else {
        cout << "Minimum element: " << result[0] << endl;
        cout << "Second minimum element: " << result[1] << endl;
    }

    return 0;
}
