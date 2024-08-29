#include <iostream>
#include <vector>
using namespace std;

int uniquesum(vector<int> &v1)
{
    // Find the maximum value in the array to determine the size of the frequency array
    int max_val = 100000;

    // Create a frequency array with all elements initialized to 0
    vector<int> freq(max_val + 1, 0);

    // Count the frequency of each element in v1
    for (int i = 0; i < v1.size(); i++)
    {
        freq[v1[i]]++;
    }

    int sum = 0;

    // Sum the elements that appear exactly once
    for (int i = 0; i < v1.size(); i++)
    {
        if (freq[i] == 1)
        {
            sum=sum+i;
        }
    }

    return sum;
}

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5, 5, 4};  // Example input
    int result = uniquesum(v1);

    cout << "The sum is: " << result << " ";  // Output the result

    return 0;
}
