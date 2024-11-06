//https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int max = INT_MIN;  // Assume the first element is the maximum
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if a larger element is found
        }
    }
    return max;
}

int main() {
    int arr[] = {5, 3, 8, 6, 2, 7, 4, 9};  // Sample array
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int maxElement = findMax(arr, size);
    cout << "The maximum element in the array is: " << maxElement << endl;

    return 0;
}
