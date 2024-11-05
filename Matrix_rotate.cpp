/*https://www.geeksforgeeks.org/problems/rotate-by-90-degree0356/1*/
#include <iostream>
#include <vector>
using namespace std;

// Function to rotate the matrix by 90 degrees clockwise
void rotate90Clockwise(vector<vector<int>>& matrix) {
    int n = matrix.size(); // size of the matrix (n x n)

    // Step 1: Transpose the matrix
    // Swap elements across the diagonal
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Swap matrix[i][j] with matrix[j][i]
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    // This will complete the 90-degree clockwise rotation

    /*
    another way of the reverse.
     for (int i = 0; i < n; i++) {
        reverse(mat[i].begin(), mat[i].end());
    }
}*/
    for (int i = 0; i < n; i++) {
        int start = 0;
        int end = n - 1;
        // Reverse elements in the row by swapping
        while (start < end) {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }
}

// Function to print the matrix
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    // Example matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    rotate90Clockwise(matrix);

    cout << "\nMatrix after 90-degree clockwise rotation:" << endl;
    printMatrix(matrix);

    return 0;
}
