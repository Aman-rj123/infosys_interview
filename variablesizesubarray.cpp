#include <iostream>
#include <vector>
#include <climits>  // For INT_MAX

using namespace std;

int minSubArrayLen(int target, const vector<int>& arr) {
    int n = arr.size();
    int minLength = INT_MAX;  // Initialize to a large value
    int currentSum = 0;
    int start = 0;

    // Traverse the array with the end pointer
    for (int end = 0; end < n; ++end) {
        currentSum += arr[end];  // Add the current element to the sum

        // While the sum is greater than or equal to the target
        while (currentSum >= target) {
            minLength = min(minLength, end - start + 1);  // Update the minimum length
            currentSum -= arr[start];  // Remove the element at the start of the window
            ++start;  // Move the start of the window to the right
        }
    }

    // Return 0 if no valid subarray was found, otherwise return minLength
    if (minLength == INT_MAX) {
        return 0;
    } else {
        return minLength;
    }
}

int main() {
    // Example input
    vector<int> arr = {2, 3, 1, 2, 4, 3};
    int target = 7;

    int result = minSubArrayLen(target, arr);

    // Output the result
    if (result > 0) {
        cout << "The length of the smallest subarray with sum >= " << target << " is " << result << "." << endl;
    } else {
        cout << "No subarray found with sum >= " << target << "." << endl;
    }

    return 0;
}
