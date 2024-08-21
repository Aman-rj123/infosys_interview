#include <iostream>
#include <vector>

using namespace std;

// Function to merge two sorted vectors
vector<int> merge(const vector<int>& left, const vector<int>& right) {
    vector<int> result;
    int i = 0, j = 0;

    // Merge the two sorted vectors
    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            result.push_back(left[i]);
            i++;
        } else {
            result.push_back(right[j]);
            j++;
        }
    }

    // Copy remaining elements from left, if any
    while (i < left.size()) {
        result.push_back(left[i]);
        i++;
    }

    // Copy remaining elements from right, if any
    while (j < right.size()) {
        result.push_back(right[j]);
        j++;
    }

    return result;
}

// Function to perform merge sort
vector<int> merge_sort(const vector<int>& arr) {
    if (arr.size() <= 1) {
        return arr; // Base case: Array with 0 or 1 element is already sorted
    }

    int mid = arr.size() / 2;
    vector<int> left(arr.begin(), arr.begin() + mid);
    vector<int> right(arr.begin() + mid, arr.end());

    left = merge_sort(left); // Recursively sort the left half
    right = merge_sort(right); // Recursively sort the right half

    return merge(left, right); // Merge the sorted halves
}

int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    vector<int> sorted_arr = merge_sort(arr);

    cout << "Sorted array: ";
    for (int num : sorted_arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
