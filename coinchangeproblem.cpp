#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Recursive function to find the minimum number of coins
int coinChangeRec(vector<int>& coins, int amount) {
    // Base case: if amount is 0, no coins are needed
    if (amount == 0) return 0;

    // If amount is negative, return a large value indicating not possible
    if (amount < 0) return INT_MAX;

    // Initialize the minimum coins needed to a large value
    int min_coins = INT_MAX;

    // Try every coin and see which one results in the minimum coins
    for (int coin : coins) {
        int res = coinChangeRec(coins, amount - coin);
        if (res != INT_MAX) {
            min_coins = min(min_coins, res + 1);
        }
    }

    return min_coins;
}

int main() {
    vector<int> coins = {1, 2, 5};
    int amount = 11;

    int result = coinChangeRec(coins, amount);
    
    if (result == INT_MAX) {
        cout << -1 << endl;  // If no combination can give the exact amount
    } else {
        cout << result << endl;  // Minimum number of coins needed
    }

    return 0;
}
