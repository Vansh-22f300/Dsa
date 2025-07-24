#include <iostream>
#include <vector>
using namespace std;

// Simple recursive approach (exponential time)
int nstairs(int n, int k) {
    if (n == 0) return 1;
    if (n < 0) return 0;

    int ans = 0;
    for (int i = 1; i <= k; ++i) {
        ans += nstairs(n - i, k);
    }
    return ans;
}

// Top-down DP with memoization
int topDown(int n, int k, vector<int> &dp) {
    if (n == 0) return dp[n] = 1;
    if (n < 0) return 0;
    if (dp[n] != -1) return dp[n];

    int ans = 0;
    for (int i = 1; i <= k; ++i) {
        ans += topDown(n - i, k, dp);
    }

    return dp[n] = ans;
}

int main() {
    int n = 5; // total stairs
    int k = 2; // max steps at a time

    // Recursive (not efficient for large n)
    cout << "Ways (recursive): " << nstairs(n, k) << endl;

    // Top-down DP
    vector<int> dp(n + 1, -1);
    cout << "Ways (top-down DP): " << topDown(n, k, dp) << endl;

    return 0;
}
